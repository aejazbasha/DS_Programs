
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int is_empty()
{
	if(-1 == stack->top)
		return 1;

	return 0;
}
