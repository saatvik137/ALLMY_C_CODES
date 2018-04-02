#include<stdio.h>
#include<stdlib.h> 
#include<memory.h>
	typedef struct ListNode {
	int data ; //DATA RAKHENGE LIST KA
	struct ListNode *next ;
    }node1;
    node1 *head = NULL ;
void main()
{
	int h,data,position ;
	printf("Linked list banayenge \n");
	printf("Pehle single linked list \n");
    printf("Kya karna chahte ho list se ? \n") ;
	printf("1. INSERT \n 2. DELETE \n 3.VIEW \n 4.COUNT \n");
	scanf("%d",&h);
	int i = 0 ;
	int n ;
	switch(h)
	{
		case 1 : 
		
		
		printf("How many entries do you want to make ? ");
		scanf("%d",&n) ;
		for(i=0 ; i <= n ;i++ )
		{
		printf("ENTER DATA : \n") ;
		scanf("%d",&data);
		printf("ENTER POSITION\n") ;
		scanf("%d",&position) ;
		insert(&head, data , position ) ;
        }
		case 2 : display() ;	
	
	}
	
	  	
}
 insert(node1 **head , int data , int position )
{
	int k = 1 ;
	node1 *p , *q ,*newNode ;
	newNode = (node1 *)malloc(sizeof(node1));
	if(!newNode){
		printf("MEMORY ERROR") ; //coz new node is a memory spot for a struct of type LISTNODE 
		return ;
	}
	newNode -> data = data ; 
	p = *head ; 
	//inserting at beginning 
	if(position == 1 )
	{
	newNode -> next = p ;
	*head = newNode ; 
	
	printf("ho gaya \n");
    return 0 ; 
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
	
}

 
 
 int delete(node1 *head , int position )
 {
 	int k = 1 ; 
 	node1 *p , *q ;
 	p = head ; 
 	if (position == 1)
 	{
 		head = head->next ; 
 		free(p) ;
 		return ; 
 	}
   return ;
 }
 
 
int display()
{
node1 *ptr;
ptr=head;
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;

}
return 0 ;
}

void swapNodes(node1 **head_ref, int x, int y)
{
   // Nothing to do if x and y are same
   if (x == y) return;
 
   // Search for x (keep track of prevX and CurrX
    node1 *q = NULL, *p = *head;
   while (p && p->data != x)
   {
       q = p;
       p = p->next;
   }
 
   // Search for y (keep track of prevY and CurrY
    node1  *q2 = NULL, *p2 = *head;
   while (p2 && p2->data != y)
   {
       q2=p2 ;
       p2 = p2->next;
   }
 
   // If either x or y is not present, nothing to do
   if (p2 == NULL || p  == NULL)
       return;
 
   // If x is not head of linked list
   if (q != NULL)
       q->next = p ;
   else // Else make y as new head
       *head =p;  
 
   // If y is not head of linked list
   if (q2 != NULL)
       q2->next =p2;
   else  // Else make x as new head
       *head = p2;
 
   // Swap next pointers
   node1 *temp = p2->next;
   p2->next = p->next;
   p->next  = temp;
}
 

