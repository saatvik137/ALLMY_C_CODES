#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack_arr[MAX];
int top = -1;

void push(int item);
int pop();
int isEmpty();
int isFull();
 
/*
int main()
{
	int choice,x;
	while(1)
	{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1 :
			printf("Enter the number to be pushed : ");
			scanf("%d",&x);
			push(x);
			break;
		 case 2:
			x = pop();
			printf("Popped number is : %d\n",x);
			break;
		 case 3:
			exit(1);
		 default:
			printf("Wrong choice\n");
		}
	}
}
*/

void push(int x)
{
	if( isFull() )
	{
		printf("Stack Overflow\n");
		return;
	}
	top = top+1;
	stack_arr[top] = x;
}

int pop()
{
	if(isEmpty() )
	{
		//printf("Stack Underflow\n");
		exit(1);
	}
	return (stack_arr[top--]) ;
	
}

int isEmpty()
{
	if( top == -1 )
		return 1;
	else	
	return 0;
}

int isFull()
{
	if( top == MAX-1 )
		return 1;
	else
	return 0;
}


