#include<stdio.h>
#include<stdlib.h>
#include<memory.h>


typedef struct node{
	int data ;
	struct node *next ;
}node1;
 
node1 *head = NULL ;  



insertinend(node1 **head, int data )
{
	int j ;
	printf("ye execute hua\n");
	
	node1 *p,*q,*newnode ;
	p=*head ;
	newnode =(node1*)malloc(sizeof(node1));
	int k = 1 ;
	if(printf("YAHAN POHONCH GAYE\n"))
	if(*head==NULL)
	{
	*head=newnode;
	printf("ye bhi execute hua\n ");
}
else
    {
    while(p->next!=*head)
	{
		k++ ;
		q=p ;
		p=p->next ;
	}
	q->next=newnode ;
	newnode->next=*head ;
}
    newnode->data=data ;
	return 0 ;
}

int count(node1 **head)
{
	node1 *p ;
	int i = 0 ;
     if(*head==NULL){
     
     return 0 ;
     printf("we're here");}
	 do{
      	p=p->next;
     	i++;
     	printf("%d \n",p->data);
     }while(p->next!=NULL);
     
	 
	 return i ;   
}

int main ()
{   printf("yahan shuru kiya\n"); 
	insertinend(&head,5);
	printf("function executed");
	printf("issme backchodi ho rahi hai  %d \n",count(&head)) ;
	return 0 ;
}
