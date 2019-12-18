#include<stdio.h>
#include<stdlib.h>
#include "stack.h"
#include "color.h"

#if 0 /* To comment */
struct node
{
	int data;
	struct node *next;
};
struct node *top = NULL;
#endif

int main()
{
	fflush(stdout);
	printf("%sAvailable choices \"1\".push \"2\".pop \"3\".display \"4\".peek \"5\".exit\n%s", magenta, none);
	fflush(stdout);
	while(1)
	{
		int val;
		printf("%senter your choice%s\n", blue, none);
		switch(get_integer())	{
			case 1:
							printf("enter the value to be pushed\n");
							//scanf("%d",&val);
							val = get_integer();
							push(val);
							break;
			case 2:	val = pop();
							if(-1 == val)
								break;
							printf("popped integer is %d\n",val);
							break;
			case 3:	display();
							break;
			case 4:	val = peek();
							if(-1 == val)
								break;
							printf("peek element is %d\n",val);
							break;
			case 5:	exit(0);

			default: printf("enter correct choice\n");
							break;
						}
	}
return 0;
}
