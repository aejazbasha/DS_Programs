#include<stdio.h>
#include<stdlib.h>
#include"doubly.h"
#include "color.h"

void display()
{
	if(isEmpty())
		printf("%slist is empty%s\n", red, none);
	else {
		DOUBLYNODE_TypeDef *temp;
		temp = head;
		printf("list is:\n");
		while(temp != NULL)
		{
			printf("%s%d %s",green, temp->data, none);
			temp = temp->next;
		}
		printf("\n");
	}
}
