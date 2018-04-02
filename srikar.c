#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
node *head=NULL;
void create(int x)
{
node *ptr,*temp;
temp=(struct node*)malloc (sizeof (struct node));
temp->data=x;
if(head==NULL){
head=temp;
temp->next=NULL;
}
else{
ptr=head;
while(ptr->next!=NULL){
ptr=ptr->next;
}
ptr->next=temp;
temp->data=x;
temp->next=NULL;
}
}


void swap(int x,int y)
{
node *temp1,*temp2,*ptr1,*ptr2,*k;
ptr1=head;
while(ptr1->data!=x){
    temp1=ptr1;
ptr1=ptr1->next;
}

while(ptr2->data!=y){
    temp2=ptr2;
ptr2=ptr2->next;

}

k=ptr2->next;
temp1->next=ptr2;
ptr2->next=ptr1->next;
temp2->next=ptr1;
ptr1->next=k;
}

void display()
{
node *ptr;
ptr=head;
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}

void main()
{
int x,y,z,i,j;
printf("enter the total numbers in list");
scanf("%d",&z);
for(i=0;i<z;i++){
printf("enter the values of linked list");
scanf("%d",&j);
create(j);
}
printf("list:");
display();
printf("enter the values u want to swap:");
scanf("%d",&x);
scanf("%d",&y);
swap(x,y);
display();
}


