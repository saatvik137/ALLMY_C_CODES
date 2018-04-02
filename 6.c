#include<stdio.h>
#include<stdlib.h>
int main()
{
	long A,K,N ;
	int i ; 
	scanf("%11d %11d %11d",&A,&N,&K) ;
	int *M=(int*)calloc(K,sizeof(int));
	for(i=0;i<K;i++)
	{
	M[i]=0 ;
	}
	
	while(A!=0)
	{
		int k =0 ;
		M[k]++ ;
		A--;
		for(i=0;i<N ;i++)
		{
		if(M[i]>N)
		{
		M[i] = 0 ;
		M[i+1]++;
		}
		}
	
	}
	for(i=0;i<K ;i++)
    printf("%11d",M[i]);
    printf("\n") ;
	
	return 0 ;
		
}
