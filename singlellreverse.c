#include<stdio.h>
#include<stdlib.h>


struct node *create_list(struct node *start) ;
struct node *reverse(struct node *head) ;
struct node *del(struct node *start,int data) ;
struct node *addatbeg(struct node *start,int data) ;
struct node *addatend(struct node *start,int data) ;

struct node
{
	int info;
	struct node *link;
};


int main()
{
struct node *start = NULL ; 

int choice,data,item ;  

while(1)
	{
		printf("\n") ;
		printf("1.Create List\n");
		printf("2.Display\n");
		printf("3.Delete\n");
		printf("4.Reverse\n");
		printf("5.Quit\n\n");
		
		printf("Enter your choice : \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
		 case 1:
			start=create_list(start);
			break;
		 case 2:
			display(start);
			break;
		 
		 case 3:
			printf("Enter the element to be deleted : ");
			scanf("%d",&data);
			start=del(start, data);	
			break;
		 case 4:
			start=reverse(start);
			break;
		 case 5:
			 exit(1);
		 default:
			 printf("Wrong choice\n");
		}
	}
	
	



return 0;
}

struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;

	printf("Enter the element to be inserted : ");
	scanf("%d",&data);
	start=addatbeg(start,data);

	for(i=2;i<=n;i++)
	{
		printf("Enter the element to be inserted : ");
		scanf("%d",&data);
		start=addatend(start,data);	
	}
	return start;
}





struct node *reverse(struct node *head)
{
	struct node *prev, *ptr, *next;
	prev=NULL;
   	ptr=head;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	head=prev;
	printf("\n") ;
	return head;
}



struct node *del(struct node *start,int data)
{
	struct node *tmp,*p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return start;
	}

	if(start->info==data)
	{
		tmp=start;
		start=start->link;  
		free(tmp);
		return start;
	}

	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==data)   
		{
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return start;
		}
		p=p->link;
	}
	printf("Element %d not found\n",data);
	return start;
}

struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}


struct node *addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}

display(start)
 {
 	printf("\n") ;
 	struct node *p = start  ; 

 	
 	while(p!=NULL)
 	 {
 	 	printf("%d \t",p->info) ;
 	 	p=p->link ;
 	}
}
