//geeks for geeks 
#include<stdio.h>
#include<stdlib.h> 
#include<memory.h>

typedef struct ListNode {
	int data ; 
	struct ListNode *next ;
    }node1;

int push(node1** head_ref, int new_data)
{
    /* 1. allocate node */
    node1* new_node = (node1*) malloc(sizeof(node1));
 
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node;

return ; 
}

//when previous node is given 
// pointer dena hoga isme 

void insertAfter(node1* prev_node, int new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }
 
    /* 2. allocate new node */
    node1* new_node =(node1*) malloc(sizeof(node1));
 
    /* 3. put in the data  */
    new_node->data  = new_data;
 
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;
 
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}
 
void append(node1** head_ref, int new_data) //end me insert karne k liye 
{
    /* 1. allocate node */
    node1 *new_node = (node1*) malloc(sizeof(node1));
 
     node1 *last = *head_ref;  /* used in step 5*/
 
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
/*Double pointer is used when you want to change your local_copy of head_pointer. 
Remember, call-by-value and call-by-reference. It is similar to that*/

void printList( node1 *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}
 

void main()
{
	 node1* head = NULL;
	  // Insert 6.  So linked list becomes 6->NULL
  append(&head, 6);
 
  // Insert 7 at the beginning. So linked list becomes 7->6->NULL
  push(&head, 7);
 
  // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
  push(&head, 1);
 
  // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
  append(&head, 4);
 
  // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL
  insertAfter(head->next, 8);
 
  printf("\n Created Linked list is: ");
  printList(head);
	 printf("this will work\n");
	 
	 return ; 
}

