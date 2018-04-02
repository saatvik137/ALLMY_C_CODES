#include<stdio.h>
#include<stdlib.h>

 struct arr
{
	int top ;
	//int capacity ;
	int *array ;
};

struct arr* Create()
{
	struct arr * s1 = (struct arr * )malloc(sizeof(struct arr)) ;
	if(!s1) 
	return ; 
	//(s1->capacity)= capacity ; 
	(s1->top)=-1 ;
	(s1->array)= malloc(sizeof(int)*s1->capacity) ;
	if(!s1->array) 
	return ; 
	return s1 ;
}

void push(struct arr *a ,int data)
{
	a->array[++a->top]=data  ;
}

int pop(struct arr* a)
{
	printf("%d",a->array[a->top--]) ;
	return 0 ;
	//return( a->array[a->top--] );
}

int main()

{
  	
 struct arr * s1 = Create(5) ;
 push(s1,1) ;
 push(s1,2) ;
 push(s1,1) ;
 push(s1,1) ;
 push(s1,1) ;
 push(s1,1) ;
  pop(s1) ;
  pop(s1) ;	
  
  pop(s1) ;
  pop(s1) ;	
  pop(s1) ;
  pop(s1) ;	
}
