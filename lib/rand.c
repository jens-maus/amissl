#include <stdlib.h>

static unsigned int a=1;

int rand(void)
{ return (a=a*1103515245+12345)%RAND_MAX; }

void srand(unsigned int seed)
{ a=seed; }

