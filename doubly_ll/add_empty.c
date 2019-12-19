#include<stdio.h>
#include<stdlib.h>
#include"doubly.h"
#include "color.h"

void addtoempty(int val)
{
	DOUBLYNODE_TypeDef *temp;
	temp = (DOUBLYNODE_TypeDef *)malloc(sizeof(DOUBLYNODE_TypeDef));
	if( temp != NULL) {
		temp->data = val;
		temp->prev = NULL;
		temp->next = NULL;
		head = temp;
	}
	else
		printf("%serror in memory allocation%s\n", red, none);
}
