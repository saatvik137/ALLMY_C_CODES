#include<stdio.h>

#define MAXSIZE 30 

struct stack {
	int sa[MAXSIZE] ;
	int top ;
}s;


	
	
		

int isFull()
 {

 	if(s.top == MAXSIZE-1)
	 return 1 ;
	 else
	 return 0 ;

}

int isEmpty()
 {
 	if (s.top==-1)
 	return 1 ;
 	else 
 	return 0 ;
	
}


void push(int data)
{
    if(isFull()){
	printf("Stack Overflow") ;
    return ;
	}
	s.sa[++s.top] = data ; 
    return ;
}

int pop(void)
{
	printf("%d",s.sa[s.top]);
	return(s.sa[s.top--]) ;
}



