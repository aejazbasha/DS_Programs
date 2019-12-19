#include<stdio.h>
#include<stdlib.h>
#include"doubly.h"
#include "color.h"

void create_list()
{
	int i,n,val;
	printf("%senter number of nodes%s\n", blue, none);
	n = get_integer();
	if(n!=0){
		for(i=0;i<n;i++)
		{
			if(isEmpty()) {
				printf("%senter element to be inserted in empty list%s\n", blue, none);
				val = get_integer();
				addtoempty(val);
			} else {
				printf("%senter the element to be inserted in list%s\n", blue, none);
				val = get_integer();
				insert_at_end(val);
				}
		}
	}
	else
		printf("%schoosen 0 elements to insert bye-bye%s\n", red, none);
}
