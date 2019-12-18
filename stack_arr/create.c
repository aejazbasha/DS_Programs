#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include "color.h"


void create()
{	
	stack = (STACK_TypeDef *)malloc(sizeof(STACK_TypeDef));
	if(NULL == stack) {
		printf("Error in malloc\n");
		exit(EXIT_FAILURE);
	}
				
	stack->capacity = MAX;
	stack->top = -1;
	stack->array = (int*)calloc(stack->capacity,sizeof(int));
	if(NULL == stack->array) {
		printf("Error in memory allocation for array\n");
		exit(EXIT_FAILURE);
	}
	
}
