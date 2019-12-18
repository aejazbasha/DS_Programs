#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include "color.h"


int main()
{
	fflush(stdout);
	printf("%sAvailable choices \"1\".push \"2\".pop \"3\".display \"4\".peek \"5\".exit \"6\".create stack\n%s", magenta, none);
	fflush(stdout);
	while(1)
	{
		int val;
		printf("%senter your choice%s\n", blue, none);
		switch(get_integer()) {
			case 1:
				printf("enter the value to be pushed\n");
				val = get_integer();
				push(val);
				break;

			case 2:	
				val = pop();
				if(-1 == val)
					break;
				
				printf("popped integer is %d\n",val);
				break;

			case 3:	
				display();
				break;
		
			case 4:	
				val = peek();
				if(-1 == val)
					break;
				
				printf("peek element is %d\n",val);
				break;

			case 5:	exit(EXIT_SUCCESS);

			case 6: 
				create();
				break;				

			default: 
				printf("enter correct choice\n");
				break;
			}
	}
return EXIT_SUCCESS;
}
