#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include"color.h"

int pop()
{
	int val;
	if( is_empty() ) {
		printf("%sstack underflow%s\n", red, none);
		return -1;
	}
	
	val = stack->array[stack->top];
	stack->top--;
	return val;
}
