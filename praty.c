#include<stdio.h>
#include<stdlib.h> 
#include<memory.h>
	typedef struct ListNode {
	int data ; //DATA RAKHENGE LIST KA
	struct ListNode *next ;
    }node1;
    node1 *head;
void main()
{
	int h,data,position ;
	printf("Linked list banayenge \n");
	printf("Pehle single linked list \n");
    while(1){
    
	printf("Kya karna chahte ho list se ? \n") ;
	printf("1. INSERT \n 2. DELETE \n 3.VIEW \n 4.COUNT \n");
	scanf("%d",&h);
	
	switch(h)
	{
		case 1 : printf("ENTER DATA : \n") ;
		scanf("%d",&data);
		printf("ENTER POSITION\n") ;
		scanf("%d",&position) ;
		insert(head, data , position ) ;
		printf("VALUE HAS BEEN INSERTED");
		break ; 
		
		case 3 : display(head);
	}
}
}
 insert(node1 *head , int data , int position )
{
	int k = 1 ;
	node1 *p , *q ,*newNode ;
	newNode = (node1 *)malloc(sizeof(node1));
	if(!newNode){
		printf("MEMORY ERROR") ; //coz new node is a memory spot for a struct of type LISTNODE 
		return ;
	}
	newNode -> data = data ; 
	p = head ; 
	//inserting at beginning 
	if(position == 1 )
	{
	newNode -> next = p ;
	head = newNode ; 
	return ;
    }
	else 
    {
    	while((p!=NULL) && (k<position))
    	k++;
    	q=p ;
    	p = p -> next ; 
    }
    q->next=newNode ;//i don't understand this part let's see doe 
    newNode->next=p ;
    return ; 
	
}


display(node1 *head)
{
	node1 *p ;
	p=head ;
	while(p->next!=NULL)
	{
	printf("%d /t",p->data);
    p =( p -> next) ; 
    }
return ; 
}
