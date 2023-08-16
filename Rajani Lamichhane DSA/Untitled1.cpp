#include <stdio.h>
struct sll;
{
	int data ;
	struct sll *next;
	
};

void add_beginning (struct sll *head, int num)
{
	struct sll *newnode;
	newnode=(struct sll*) malloc (sizeof (struct sll));
	newnode -> data=num;
	newnode -> next=NULL;
	if (*head == NULL)
	{
		*head= newnode;
	}
	
	else 
	{
		newnode -> next = *head;
		*head =newnode;
	}
}
