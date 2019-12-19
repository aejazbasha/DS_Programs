#include <stdio.h>
#include <stdlib.h>
#include "singly.h"
#include "color.h"

void insert_beg(int val)
{
	struct node *temp = NULL;
	temp=(SINGLYNODE_TypeDef*)malloc(sizeof(SINGLYNODE_TypeDef));
	if(NULL == temp)
		printf("error in malloc\n");
	else {
		temp->data=val;
		temp->next=NULL;

		temp->next=head;
		head=temp;
	}
}
