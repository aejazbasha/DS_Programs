#include<stdio.h>
#include<stdlib.h>
#include "singly.h"
#include "color.h"

void delete_beg()
{
	SINGLYNODE_TypeDef *temp = NULL;
	/* if list is empty */
	if(isEmpty())
		printf("%slist is already empty,cannot delete%s\n", red, none);
	else {
	temp=head;
	head=head->next;
	printf("%sdeleting the node with value %d%s\n", blue, temp->data, none);
	free(temp);
	temp = NULL;
	}
}
