#include <stdio.h>
#include <stdlib.h>
#include "doubly.h"
#include "color.h"

DOUBLYNODE_TypeDef *head=NULL;

int main()
{
	int choice,val;
	do
	{
	options:
		printf("1.insert_at_end\n");
		printf("2.delete_from_end\n");
		printf("3.create list\n");
		printf("4.display\n");
		printf("5.addtoempty\n");
		printf("6.exit\n");
		printf("enter your choice\n");
		choice = get_integer();

		switch(choice)
		{
			case 1: printf("%senter elements to be inserted%s\n", blue, none);
							val = get_integer();
							insert_at_end(val);
							break;
			case 2:
							delete_end();
							break;
			case 3:
							create_list();
							break;

			case 4:
							display(head);
							break;
			case 5:
							if(isEmpty()) {
								printf("%senter elements to be inserted into empty list%s\n", blue, none);
								val = get_integer();
								addtoempty(val);
								}
								else {
									printf("%sList is not empty%s\n", green, none);
								}
							break;
			case 6:
							exit(EXIT_SUCCESS);
		}
	}while(choice!=7);

	goto options;
return 0;
}
