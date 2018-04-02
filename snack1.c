#include <stdio.h>
#include<stdlib.h>


int main() 
{
int t , N ;
scanf("%d",&t);
while(t--)
{
	int i = 0 ;
	int count=0 ; 
	scanf("%d",&N) ;
	int A[N],B[N] ;
	for(i=0 ; i<N; i++)
	{
		scanf("%d",&A[i]) ;
	}
	for(i=0 ; i<N; i++)
	{
		scanf("%d",&B[i]) ;
	}
	if(B[i]<=A[i])
	count++ ;
    for(i=1 ; i<N; i++) 
    {
    	if(A[i]-A[i-1]<=B[i])
    	count++ ; 
    }
    
printf("%d",count) ; 
    
	
}
}
