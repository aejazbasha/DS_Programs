#include<stdio.h>
#include<stdlib.h>
#include "singly.h"
#include "color.h"

void display()
{
	SINGLYNODE_TypeDef *temp = NULL;
	temp = head;
	if(isEmpty())
		printf("%sList is Empty try to insert%s\n", red, none);

	else {
		printf("the linked list contents are\n");
		while( temp!=NULL )
		{
			printf("%s%d%s\t",green, temp->data, none);
			temp = temp->next;
		}
		printf("\n");
	}
}
