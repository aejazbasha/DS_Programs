#include<stdio.h>
#include<stdlib.h>
#include"doubly.h"
#include "color.h"

void delete_end()
{
	DOUBLYNODE_TypeDef *temp;
	if(isEmpty())
		printf("%slist is empty%s\n", red, none);
	else {
		temp = head;
		if(temp->next == NULL)
		{
			head = temp->next;
			free(temp);
			temp = NULL;
		} else {
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->prev->next = NULL;
			free(temp);
			temp = NULL;
		}
	}
}
