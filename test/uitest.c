#include <stdio.h>
#include <openssl/ui.h>

#if !defined(SAVEDS)
#define SAVEDS __saveds
#endif

struct Library *SocketBase; /* Not used */

static int SAVEDS ui_open(UI *ui)
{
	int (*func)(UI *) = UI_method_get_opener(UI_OpenSSL());

	return(func ? func(ui) : 1);
}

static int SAVEDS ui_read(UI *ui, UI_STRING *uis)
{
	int (*func)(UI *, UI_STRING *) = UI_method_get_reader(UI_OpenSSL());

	return(func ? func(ui, uis) : 1);
}

static int SAVEDS ui_write(UI *ui, UI_STRING *uis)
{
	int (*func)(UI *, UI_STRING *) = UI_method_get_writer(UI_OpenSSL());

	return(func ? func(ui, uis) : 1);
}

static int SAVEDS ui_close(UI *ui)
{
	int (*func)(UI *) = UI_method_get_closer(UI_OpenSSL());

	return(func ? func(ui) : 1);
}

static void TestUI(UI *ui)
{
	char buffer[64] = {'!'};

	if (ui)
	{
		char answer1 = '!', answer2 = '!';
		int ok;

		if ((ok = UI_add_info_string(ui, "Info")) < 0)
			printf("Error while adding info string\n");
		else if ((ok = UI_add_input_string(ui, "Prompt2", 0, &buffer[0], 0,
		                                   sizeof(buffer) - 1)) < 0)
			printf("Error while adding input string\n");
		else if ((ok = UI_dup_input_boolean(ui, "Boolean1",
		                                    "\n then hit <enter> or C<enter> to cancel\n",
		                                    "o", "c", UI_INPUT_FLAG_ECHO,
		                                    &answer1)) < 0)
			printf("Error while adding boolean string\n");
		else if ((ok = UI_dup_input_boolean(ui, "Boolean2",
		                                    "\n then hit <enter> or C<enter> to cancel\n",
		                                    "y", "N", UI_INPUT_FLAG_ECHO,
		                                    &answer2)) < 0)
			printf("Error while adding boolean string\n");
		else if ((ok = UI_process(ui)) < 0)
			printf("Error during UI_process\n");

		printf("Prompt result: %s\n", &buffer[0]);

		printf("Answer1: %c\n", answer1);
		printf("Answer2: %c\n", answer2);
	}
}

int main(void)
{
	char buffer1[64], buffer2[64];
	UI_METHOD *ui_method;
	UI *ui;

	printf("Testing UI_UTIL_read_pw:\n");

	if (UI_UTIL_read_pw(&buffer1[0], &buffer2[0], sizeof(buffer1) - 1, "Prompt", 1) == 0)
		printf("Password: \"%s\"\n", &buffer1[0]);
	else
		printf("Error getting password\n");

	printf("Testing UI with default UI method:\n");

	if((ui = UI_new()) != NULL)
	{
		TestUI(ui);
		UI_free(ui);
	}
	else
		printf("Couldn't setup method\n");

	printf("Testing UI with UI method with wrappers:\n");

	if((ui_method = UI_create_method((char *)"Test method")) != NULL)
	{
		if((ui = UI_new_method(ui_method)) != NULL)
		{
			UI_method_set_opener(ui_method, ui_open);
			UI_method_set_reader(ui_method, ui_read);
			UI_method_set_writer(ui_method, ui_write);
			UI_method_set_closer(ui_method, ui_close);

			TestUI(ui);
			UI_free(ui);
		}
		else
			printf("Couldn't setup method\n");

		UI_destroy_method(ui_method);
	}
	else
		printf("Couldn't create method\n");

	return(0);
}
