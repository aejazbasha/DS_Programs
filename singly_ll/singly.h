#ifndef _SINGLYH_
#define _SINGLYH_

void display();
void insert_beg(int);
void insert_end(int);
void delete_beg();
void delete_end();
int isEmpty();
int get_integer();
void delete_specified_element(int);
void detect_loop();
void list_error();

typedef struct node
{
	int data;
	struct node *next;
}SINGLYNODE_TypeDef;

extern struct node *head;

#endif
