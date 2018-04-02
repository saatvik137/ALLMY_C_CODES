#include<stdio.h>
//BINARY TREE 
struct BT {
	int data ;
	struct BT *left,*right ;
};

//queues banate hain pehle 

#define MAX_LEN 999

int que[MAX_LEN]
int front = -1 ;
int rear = -1 ;

void IsEmpty()
{
 if(front == -1 && rear == -1)
 return 1 ;
 else
 return 0 ;
}

void Enqueue(int x)
{
	if(isfull)
	return 0 ;) 
	if(IsEmpty)
	front=rear=1 ;
	else 
	rear++;
	que[rear] = x ;
}

void deque()
{
	if(IsEmpty)
	return ;
	else if (front == rear) 
	front=rear=-1 ;
	else
	front++;
}


void INSERTBT(struct BT *root , int data)
{
	struct Que *Q ;
	struct BT *temp ;
	struct BT *newNode ;
	newNode = (struct BT *)malloc(sizeof(struct BT));
	newNode -> left = newNode ->right = NULL ;
	if(!newNode)
	{
	printf("Memory error");
    return ;  
    }
    if(!root)
	{
		root = newnode ;
		return ;
	} 

Enqueue(data) ;


}
