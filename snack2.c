#include <stdio.h>
#include<stdlib.h>
#define MAX 100000

int main() 
{
int t ,A[MAX],B[MAX], N ;
scanf("%d",&t);
while(t--)
{
	int i = 0 ;
	scanf("%d",&N) ;
	for(i=0 ; i<N; i++)
	{
		scanf("%d",&A[i]) ;
	}
	for(i=0 ; i<N; i++)
	{
		scanf("%d",&B[i]) ;
	}
    int count=0 ; 
	 i = 0 ;
	if(B[i]<=A[i])
	count++ ;
    for(i=1 ; i<N; i++) 
    {
    	if(B[i]<=(A[i]-A[i-1]))
    	count++ ; 
    }
    
printf("%d",count) ; 
    
return 0 ; 
	
	
}
}
