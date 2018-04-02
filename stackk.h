#include<stdio.h>
#include<stdlib.h>
#define MAX 50 

char infix[MAX], postfix[MAX];
long int stack[MAX];
int top;

void push(long int symbol);
int isEmpty() ;
int pop() ;



int pop()
{
	if( isEmpty() )
	{
		printf("Stack underflow\n");
		exit(1);
	}
	return (stack[top--]);
}

int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

void push(long int symbol)
{
	if(top>MAX)
	{
		printf("Stack overflow\n");
		exit(1);
	}
	stack[++top]=symbol;
}


