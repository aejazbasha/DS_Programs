#include<stdio.h>
#include<stdlib.h>
#include "singly.h"
#include "color.h"

void insert_end(int val)
{
	SINGLYNODE_TypeDef *temp,*temp1;
	temp=(SINGLYNODE_TypeDef *)malloc(sizeof(SINGLYNODE_TypeDef));
	if(NULL == temp)
		printf("error in malloc\n");
	else {
		temp->data=val;
		temp->next=NULL;
		/* if list is empty */
		if(isEmpty())
				head=temp;
		else {
		temp1=head;
		while(temp1->next!=NULL)
			temp1=temp1->next;

			temp1->next=temp;
		}
	}
}
