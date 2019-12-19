#ifndef _DOUBLYH_
#define _DOUBLYH_

typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
}DOUBLYNODE_TypeDef;

extern DOUBLYNODE_TypeDef *head;

void create_list();
void insert_at_end(int val);
void delete_end();
void addtoempty(int val);
void display();
int get_integer();
int isEmpty();

#endif
