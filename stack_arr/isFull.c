#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int isFull()
{
	if( (stack->capacity - 1) == stack->top)
		return 1;

	return 0;
}
