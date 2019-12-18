
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include "color.h"

int peek()
{
	if(is_empty())
	{
		printf("%sstack underflow%s\n", red, none);
		return -1;
	}
	return top->data;
}
