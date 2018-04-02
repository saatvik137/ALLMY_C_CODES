#include<stdio.h>

int main()
{
	int a , b ;
	scanf("%d%d",&a,&b) ;
	printf("a = %d \n b = %d \n",a,b) ;
	
	a = a+b ;
	b = a-b ; 
	a = a-b ;
	
	printf("a = %d \n b = %d",a,b) ;
	
	
	
	return 0 ;
}
