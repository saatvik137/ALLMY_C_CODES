#include<stdio.h>

int main()
{
	
	int t,i=0 , j  ;
	scanf("%d",&t) ;
	int a[t] ;
	while(t--) 
	{
		long int N ; 
		scanf("%ld",&N) ;
		if(N%6 == 0)
		a[i] = 1 ; 
		else
		a[i] = 0 ; 
		i++ ;
	}
	
	for(j=0;j<i;j++)
	{
		if(a[j]== 0)
		printf("Chef \n") ;
		else
		printf("Misha \n") ;
	}
	
	
	
	
	return 0 ;
}
