#include<stdio.h>
#include<stdlib.h>
#include "singly.h"
#include "color.h"

void delete_specified_element(int key)
{
  SINGLYNODE_TypeDef *temp = NULL,*temp1 = NULL;
	temp = head;
	/* if list is empty */
	if(isEmpty())
		printf("%slist is already empty,cannot delete%s\n", red, none);
  /* if key is present at 1st node */
  else if( (temp1 == NULL) && (temp->data == key) )
  		delete_beg();
  /* if key is present at other nodes */
  else {
    		while( (temp->next != NULL) && (temp->data != key) )
    		{
    			temp1 = temp;
    			temp = temp->next;
    		}
    		temp1->next = temp->next;
        temp->next = NULL;
        printf("%sdeleting the node with value %d%s\n", blue, temp->data, none);
    		free(temp);
    		temp = NULL;
    	}
    }
