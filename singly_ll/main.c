#include <stdio.h>
#include <stdlib.h>
#include "singly.h"
#include "color.h"

SINGLYNODE_TypeDef *head = NULL;

int main()
{
  int option,val;
	do
	{
opt:
		printf("\n 1: Add a node at the beginning\n 2: Add a node at the end\n");
    printf(" 3: Display the list\n 4: Delete a node from the beginning\n");
    printf(" 5: Delete a node from the end\n 6: Delete particular element\n");
    printf(" 7: Create loop for testing\n 8: Detect loop\n 9: EXIT\n");

		printf(" Enter your option : ");
		option = get_integer();

		switch(option)
		{
			case 1:	printf("enter value to insert at begining of linked list\n");
              val = get_integer();

				      insert_beg(val);
				      break;

			case 2: printf("enter value to insert at end of linked list\n");
              val = get_integer();

				      insert_end(val);
				      break;
			case 3:
				      display();
				      break;
			case 4:
				      delete_beg();
				      break;
			case 5:
				      delete_end();
				      break;
      case 6:
              if(!isEmpty()){
              printf("%senter which element you want to delete%s\n", blue, none);
              val = get_integer();
              delete_specified_element(val);
              }
              else list_error();
              break;
      case 7:
              if(!isEmpty()){
              head->next->next->next = head;
              }
              else list_error();
              break;
      case 8:
              detect_loop();
              break;
      case 9:
              exit(EXIT_SUCCESS);
		}

	}while(option < 10);

  printf("select option from above mentioned \n");
  goto opt;
return 0;
}
