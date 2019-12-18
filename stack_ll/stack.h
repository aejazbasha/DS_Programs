
#ifndef _STACKH_
#define _STACKH_

struct node
{
	int data;
	struct node *next;
};
extern struct node *top;

int get_integer();
int is_empty();
void push(int);
int pop();
int peek();
void display();

#endif
