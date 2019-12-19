#include<stdio.h>
#include<stdlib.h>
#include "singly.h"
#include "color.h"

void detect_loop()
{
  if(!isEmpty()){
    SINGLYNODE_TypeDef *temp1 = NULL, *temp2 = NULL;
    temp1 = head;
    temp2 = head;

    while( (temp1 != NULL) && (temp2 != NULL) )
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;

        if(temp1 == temp2){
          printf("%sloop is detected%s\n", green, none);
          break;
        }
    }
  }
  else list_error();
}
