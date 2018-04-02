#include<stdio.h>
#include<stdlib.h>

struct ListNode {
	int key ;
	struct ListNode *next ;
};

void  Insert(struct ListNode **head,int key ,int position)
{
	struct ListNode *p,*q ;
	struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
	newNode -> key = key ;
	p=*head;
	int k =1 ;
	if(position==1)
	{
		newNode->next =p ;
		*head = newNode ;
	}
	else
	{
		//traverse karne k liye 
		while(p!=NULL && k<position )
		{
		    k++ ;
		   	q=p ;
			p=p->next ;
		}
		q->next = newNode ;
		newNode->next=p;
	}
	
}

void Print(struct ListNode **head)
{
struct ListNode *p ;
p=*head ;	
while(p!=NULL)
{
printf("%d \t",p->key);
p = p->next ;	
}
printf("\n") ;
}

int Delete(struct ListNode **head ,int key )
{

 struct ListNode *p,*q ;
 p=*head;
 while(p->key!=key)
 {
 	q=p ;
 	p=p->next;
}
   q->next =p->next ;
   free (p);
  return 0 ;
}

struct ListNode *reverse(struct ListNode *head)
{
	struct ListNode *p,*q,*ptr ;
	ptr=head ;
	while(ptr!=NULL)
	{
		p=ptr->next ;
		ptr->next=q;
		q=ptr;
		ptr=p;
	}
	head=q  ;
	return head ;
}

/* TODO (saatvik#1#): gotta ddo double linked list */


int main()
{
	struct ListNode *head = NULL ;
	Insert(&head,12,1);
	Insert(&head,13,2);
	Insert(&head,15,3);
	Print(&head); 
	Delete(&head,13);
	Print(&head);
	Insert(&head,9,4);
	Insert(&head,8,5);
	Print(&head);
	head = reverse(head);
	Print(&head);
	return 0 ;
}
