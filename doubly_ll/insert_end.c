#include<stdio.h>
#include<stdlib.h>
#include"doubly.h"
#include "color.h"

void insert_at_end(int val)
{
	if(!isEmpty()){
		DOUBLYNODE_TypeDef *temp,*temp1;
		temp = (DOUBLYNODE_TypeDef *)malloc(sizeof(DOUBLYNODE_TypeDef));
		if(temp != NULL) {
			temp->data = val;
			temp1 = head;
			while(temp1->next!=NULL)
			{
				temp1=temp1->next;
			}
			temp1->next = temp;
			temp->next = NULL;
			temp->prev = temp1;
		}
		else
			printf("%serror in memory allocation%s\n", red, none);
	}
	else
		addtoempty(val);
}
