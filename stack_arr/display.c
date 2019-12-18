#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include "color.h"

void display()
{	
	int temp = stack->top;

	if( is_empty() ) {
		printf("%sstack is empty%s\n", red, none);
		return;
	}
	printf("stack elements\n");
	while( temp >= 0 )
	{
		printf("%s%d%s\t",green, stack->array[temp], none);
		temp--;
	}
	printf("\n");
}
