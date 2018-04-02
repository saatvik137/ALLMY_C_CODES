#include<stdio.h>

int main()
{
	int K , T , IN , END ,i ;
	scanf("%d%d",&K,&T) ;
	int PRIME[K] ;
	for(i = 0 ; i < K ; i++)
	{
	scanf("%d",&PRIME[i]) ;
    }
     
    int Number = 0 ;
    while(T--)
 	{
 		scanf("%d%d",&IN,&END); 
	    while(IN<=END)
	    {
	    	i = 0 ; 
	    	for(i=0 ; i < K ; i++)
	    	{
	    	if(IN%PRIME[i]== 0)
	    	{
	    	  printf("%d\t",IN);
	          Number++ ;
	          if(i<K-1)
			  IN++ ;
	    	}
	    	
	        }
		IN++ ;
		}
	  
	 
	}
	
	 printf("\n%d", Number);
	
	
	
	return 0 ;
}
