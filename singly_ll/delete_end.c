#include<stdio.h>
#include<stdlib.h>
#include "singly.h"
#include "color.h"

void delete_end()
{
	SINGLYNODE_TypeDef *temp = NULL,*temp1 = NULL;
	temp = head;
	/* if list is empty */
	if(isEmpty())
		printf("%slist is already empty,cannot delete%s\n", red, none);
	/*if list having only one node */
	else if( temp->next == NULL)
		delete_beg();
	/* if list having more than one node */
	else {
		while(temp->next!=NULL)
		{
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next=NULL;
		printf("%sdeleting the node with value %d%s\n", blue, temp->data, none);
		free(temp);
		temp = NULL;
	}
}
