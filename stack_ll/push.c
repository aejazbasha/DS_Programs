#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#include "color.h"

struct node *top = NULL;

void push(int val)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL)
		perror("Error in Memory Alloacation to Node");
	else {
	temp->data = val;
	temp->next = top;
	top = temp;
	}
}
