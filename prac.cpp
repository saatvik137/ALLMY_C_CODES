#include<stdio.h>

void swap(int * , int *) ;

int main()
{
	
	//sending int 
	
	int a , b , c ;
	
	a = 10 ; 
	b = 11 ; 
	
	int *x , *y ;
	x= &a ;
	y = &b ;
	
	int t[5] ;
	int i = 0 ; 
	
	while(i!=5)
	{
		t[i] = 1 ;
		if(i==3)
		t[i]=3;
		i++ ;
	}
	
	swap(t,y) ;
}

void swap(int *x , int *y)
{
	int i = 0 ; 
    while(i!=5)
    {
	printf(" *t = %d  ",*x++);
	i++;
	}
	
	printf("x = %d",x);
	*x-- ;
     printf("\t x = %d",x);  	
	
	
}
