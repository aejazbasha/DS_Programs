
#ifndef _STACKH_
#define _STACKH_

#define MAX 5
typedef struct
{
	int top;
	int capacity;
	int *array;
}STACK_TypeDef;

STACK_TypeDef *stack;
int get_integer();
int is_empty();
int isFull();
void push(int);
int pop();
int peek();
void display();
void create();

#endif
