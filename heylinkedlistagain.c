#include<stdio.h>
#include<stdlib.h>

typedef struct listnode{
int x ;
struct listnode* next ;
}node;


int main()
{
node *head , *temp ;  
head =  (node*)malloc(sizeof(node)) ;
temp = head ;
temp->next=NULL ;


input(head,5) ;

input(head,5) ;

input(head,5) ;

print(head->next) ;

return 0;
}

input(node *head,int x)
{
while(head->next!=NULL)
{
head=head->next; 
}
head->next = (node*)malloc(sizeof(node));
head=head->next ;
head->x=x;
head->next=NULL ;
}

print(node *head)
{
if(head==NULL)
return ;	
printf("%d \t",head->x) ;
print(head->next) ;
} 
