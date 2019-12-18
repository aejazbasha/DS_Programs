#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include"color.h"

int pop()
{
	struct node *temp = NULL;
	int val;
	if( is_empty() ) {
		printf("%sstack underflow%s\n", red, none);
		return -1;
	}
	else {
	temp = top;
	val = temp->data;
	top = top->next;
	free(temp);
	return val;
	}
}
