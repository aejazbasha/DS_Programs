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
		printf("\n 1: Add a node at the beginning\n 2: Add a node at the end\n 3: Display the list\n");

		printf("\n 4: Delete a node from the beginning\n 5: Delete a node from the end\n 6:EXIT");

		printf("\n Enter your option : ");
		option = get_integer();

		switch(option)
		{
			case 1:	printf("enter value to insert at begining of linked list\n");
              val = get_integer();
              //n=scanf("%d",&val);
				      //if(n==0)
					      //   exit(0);
				      insert_beg(val);
				      break;

			case 2: printf("enter value to insert at end of linked list\n");
              val = get_integer();
				      // n=scanf("%d",&val);
				      // if(n==0)
					    //      exit(0);
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
              exit(EXIT_SUCCESS);
		}

	}while(option != 7);

  printf("select option from above mentioned \n");
  goto opt;
return 0;
}
