#include<stdio.h>
#include<stdlib.h>

typedef struct Listnode
{
	int data ;
	struct Listnode *next ;
}node1;


int main()
 
{  
    node1 *head,*temp ;
	head = (node1*)malloc(sizeof(node1)) ;
//	temp=head;
	head->next=NULL ;
	insert(head,3) ;
	insert(head,3) ;
	insert(head,3) ;
	delete(head,3) ;
	
	insert(head,4);
	print(head->next); 
	return 0 ; 
}

insert(node1*head,int data)
{
	node1 *p = head ;
	while(p->next!=NULL)
	{
		p=p->next ;
	}
    p->next =(node1*)malloc(sizeof(node1)) ;
	p=p->next ;
	p->data = data  ;
	p->next = NULL ;
	
}

print(node1 *head)
{
	if(head==NULL)
	return;
	printf("%d\t",head->data) ;

	print(head->next) ;
    printf("%d\t",head->data) ;
}


delete(node1 *head, int data)
 {
 	while(head->next!=NULL && (head->next)->data!=data)
	 {
	 	head = head->next ;
	 } 
  	 
  	
  	if(head->next==NULL)
  	return;
	node1 *temp ;
	temp = head->next ;
	head->next = temp->next ;
	free(temp) ;
	 
}
	

