//1st uestion stck using ll
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *top=NULL;

void push(int item);
int pop();
int peek();
int isEmpty();
void display();

int  main()
{
	int choice,x;
	while(1)
	{      	
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Quit\n");
		printf("Enter your choice : ") ;
		scanf("%d", &choice);

		switch(choice)
		{
		case 1:
			printf("Enter the num to be pushed : ");
			scanf("%d",&x);
			push(x);
			break;
		case 2:
			x=pop();
			printf("Popped item is : %d\n",x);
			break;
		case 3:
			exit(1);
		default :
			printf("Wrong choice\n");
		}	}
}

void push(int x)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	if(tmp==NULL)
	{
		printf("Stack Overflow\n");
		return;
	}
	tmp->data=x;
	tmp->next=top;
	top=tmp;
}

int pop()
{
	struct node *tmp;
	int num;
	if( isEmpty() )
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	tmp=top;
	num=tmp->data;
	top=top->next;
	free(tmp);
	return num;
}


int isEmpty()
{
	if(top == NULL)
		return 1;
		return 0;
}



