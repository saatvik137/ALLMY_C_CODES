#include<stdio.h>

int main()
{
	
	int Q ;
	int N,P,i;
    int B[1000000000],count=0 ;
	scanf("%d%d\n",&N,&P);
	long int A[N] ; 
	for(i=0;i<N;i++)
	scanf("%d",&A[i]) ;
	//AB Bada array bana yahan pe 
	//travesres array 
	for(i=0;i<N;i++)
	{
	B[count++]=A[i] ;	
    }
	
	
	for(i=0;i<N;i++)
	{
			
	if(A[i]<A[i+1])
	{   Q = A[i]+1;
	    while(Q <A[i+1])
	    {
	    B[count++] = Q ;
	    Q++;
		}
	
	
	}
	else
	{    Q=A[i+1]+1;
		 while(Q<A[i])
		 {
	 	  
	       B[count++] = Q ;
	 	   Q++ ;
		 }
	
}
    }
    /*for(i=0;i<count;i++)
    {
    	printf("%d \t",B[i]) ;
    }
    */
	for(i=0;i<P;i++)
	{
	int t ; 	
	int j = 0 ; 
	int k = 0 ; 	
	scanf("%d",&t) ;
	while(j<count)
	{
		if (B[j]==t)
		{
		printf("YES") ;
		k = 1 ;
		j++ ;
		break ;
		}
	    else 
	    j++ ;
	}
	if(k==0)
	printf("NO") ;
}
return 0 ;
}
