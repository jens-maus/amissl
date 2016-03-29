#include <stdio.h>
#include <stdlib.h>
#include <proto/exec.h>

void abort(void)
{
  perror("abort() called");

  Wait(0);

  exit(EXIT_FAILURE);
}
