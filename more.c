#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

typedef struct node1{
	int data ;
	struct node1 *next ;
}node;

node *head = NULL ; 

int main()
{
	insert(&head,3,1);
	display() ;
	return 0 ; 
}

int insert(node **head,int data, int position)
{
	node *p , *q , *newnode ;
	newnode = (node*)malloc(sizeof(node));
	//CHECK
	newnode->data=data;
	p=*head ;
	int k = 1 ;
	while(p && k<position)
	{
		k++ ;
		q=p ;
		p=p->next;
	}
	q->next=newnode;
	newnode->next=p;
    return 0 ;   
}

int  display()
{
	struct node1 *r ;
    r=head;
    if(r==NULL)
    {
    return 0;
    }

    while(r!=NULL)
    {
    printf("%d ",r->data);
    r=r->next;
    }
    printf("\n");
    return 0 ;
}
