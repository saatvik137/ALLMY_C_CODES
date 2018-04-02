#include "simplestack.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 

#define space ' '   
#define tab '\t'
int evaluation() ;

void infix_to_postfix() ;

int priority(char ) ;

char infix[MAX],postfix[MAX] ;

int isspace(char ) ;



int main()
{
	 int result ;
	printf("Enter infix expression\n") ;
	gets(infix) ;
	infix_to_postfix() ;
    result = evaluation() ;
	printf("%d",result) ; 
	
	return 0 ;
}

void infix_to_postfix()
{
	int i , p =0 ;
	char next ;
	char sym ;
	for(i=0;i<strlen(infix);i++)
	{
		sym=infix[i] ;
		if(!isspace(sym))
		{
			switch(sym)
			{
				case '(':
					push(sym);
					break ;
				case ')' :	
				   while(next=pop()!='(')
				    postfix[p++]=next ;
				    break ;
				 case '+' :  
			     case '-' :
                 case '*' :
				 case '/' :
				 case '%' :
				 case '^' :   
                 	while(!isEmpty()&&priority(stack_arr[top])>=priority(sym))
					 postfix[p++]=pop() ;
					 push(sym) ;
					 break ;
				default : postfix[p++]=sym ;	 
			 }
		}
	}
   
   while(!isEmpty())
   postfix[p++]=pop() ;  
   postfix[p]='\0' ;
}


int priority(char sym)
 {
 	switch(sym)
 	{
 		case '(' : return 0 ;
 		case '+' :
 		case '-' : return 1 ;
		case '*' :
		case '/' :
		case '%' : return 2 ;
		case '^' : return 3 ;
		default : return 0;
		 	
 	}
	
}

int evaluation()
 {
int a , b , temp, result ; 
int i ;

for(i=0 ; i<strlen(postfix);i++)
 {
 	if(postfix[i]<=9 && postfix[i]>='0')
	push(postfix[i]-'0') ;
    else
    {
    	a=pop();
    	b=pop() ;
    	switch(postfix[i])
    	 {
    	 	case '+' :
    	 		temp = b+a ;
    	 		break ; 
    	 	case '-' :
    	 		temp = b-a ;
    	 		break ; 
    	 	case '*' :
    	 		temp = b*a ;
    	 		break ; 
    	 	case '/' :
    	 		temp = b/a ;
    	 		break ; 
    	 	case '%' : 
			    temp = b%a ; 
				break ;
			case '^' : 
			     temp = pow(b,a) ;
				 break ; 		
    	 }
    	 push(temp) ;
    	 
    	 		
    	 	
    	}
    }
 
result = pop() ;
return result ;   
}

int isspace(char sym)
 {
 	if(sym==space || sym==tab )
    return 1 ;
	return 0 ; 
}
