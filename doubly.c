#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
	
	typedef struct ListNode{
		int data ; 
		struct ListNode * next ;
		struct ListNode * prev ;
	} node1 ;
    node1  *head ;  


     int insert(node1 **head,int data , int position )
    {
    	node1 *p,*q,*newnode ;
    	newnode = (node1*)malloc(sizeof(node1)) ;
    	newnode->data = data ;
    	p = *head ;
		if(position == 1)
		 {
		 	newnode -> next = p ;
		 	*head = newnode ;
		 	if(*head)
		 	(*head)->prev=newnode ;
		 	newnode -> prev = NULL ;
		 }
    	else 
    	{
    		int k = 1 ;
    		while((p->next!=NULL )&& k <position-1 )
    		{
    			k++ ;
    			p=p->next ; 
    		}
    		
    	newnode->next=p->next ;
		newnode->prev=p;
		if(p->next)
		p->next->prev=newnode;
		p->next=newnode ;
		return ;	
    	}
    	
    }
;



