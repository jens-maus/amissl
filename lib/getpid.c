#include <unistd.h>
#include <proto/exec.h>

pid_t getpid(void)
{
  return (pid_t)FindTask(NULL);
}
