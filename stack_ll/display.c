#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include "color.h"

void display()
{

	struct node *temp;
	temp = top;
	if( is_empty() ) {
		printf("%sstack is empty%s\n", red, none);
		return;
	}
	printf("stack elements\n");
	while(temp != NULL)
	{
		printf("%s%d%s\t",green, temp->data, none);
		temp = temp->next;
	}
	printf("\n");
}
