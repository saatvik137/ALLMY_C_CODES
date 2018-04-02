#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
typedef struct node
{

    int val;
    struct node* next;
    struct node* prev;
}node1;
node1 *head,*last;
main()
{
    int c,n,d;
    printf("\n1.Insert at beginning");
    printf("\n2.Insert at the end");
    printf("\n3.Insert in between");
    printf("\n4.Print");
    printf("\n5.Exit");
    printf("\nEnter choice");
    scanf("%d",&c);
    while(c!=5)
    {
    switch(c)
    {
    case 1:
        printf("\nEnter value to insert");
        scanf("%d",&n);
        binsert(n);
        break;
    case 2:
        printf("\nEnter value to insert");
        scanf("%d",&n);
        einsert(n);
        break;
    case 3:
        printf("\nEnter value after which number is to be inserted");
        scanf("%d",&d);
        printf("\nEnter value to insert");
        scanf("%d",&n);
        minsert(n,d);
        break;
    case 4:
        print();
        break;
    case 5:
        exit(0);
    }
printf("\nEnter your choice");
scanf("%d",&c);
}
}
binsert(int data)
{
    node1 *temp;
    node1 *p=(node1*)malloc(sizeof(node1));
    p->val=data;
    if(head==NULL)
    {
        head=p;
        head->prev=NULL;
        head->next=NULL;
        last=head;
    }
    else
    {
        temp=p;
        temp->prev=NULL;
        p->next=head;
        head=temp;
    }
}
einsert(int data)
{
    node1 *temp;
    node1 *p=(node1*)malloc(sizeof(node1));
    p->val=data;
    if(head==NULL)
    {
        head=p;
        head->prev=NULL;
        head->next=NULL;
        last=head;
    }
    else
    {
              temp=last;
               last=p;
     		temp->next=last;
    		 last->prev=temp;
    		 last->next=NULL;

    }
}
 minsert(int data,int find)
{
    node1 *temp,*temp1;
    node1 *p=(node1*)malloc(sizeof(node1));
    p->val=data;
    if(head==NULL)
    {
        head=p;
        head->prev=NULL;
        head->next=NULL;
    }
    else
    {
        temp=head;
        while(temp->val!=find && temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp1=temp->next;
        temp->next=p;
        p->prev=temp;
        p->next=temp1;
        temp1->prev=p;
}
}
 print()
{
    node1 *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d \t",temp->val);
        temp=temp->next;
    }
}
