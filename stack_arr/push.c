#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include "color.h"

void push(int val)
{	
	if( isFull(stack) ) {
		printf("stack overfolw\n");
	}
	else {
	++stack->top;
	stack->array[stack->top] = val;
	printf("%d pushed to stack\n", val);
	}
}
