#include<stdio.h>
int main()
{
	int N ; 
	printf("Enter size of the array : \n") ;
	scanf("%d",&N) ;	
	int A[N] ; 
	int i ;
	printf("Enter thy elements \n") ;
	for(i=0;i<N;i++)
	{
	   	scanf("%d",&A[i]) ;	
	}
	
    //insertion sort karte hain
    int key  ,j;
     
    for(i=1;i<N;i++)
    {
         key = A[i] ; 	
    	 j = i -1  ;
		 while(j>=0 && A[j]>key)
		 {
		 	A[j+1] = A[j] ;
		 	j = j-1 ;  
         }
          A[j+1] = key ;    
    }
    printf("Sorted array is : \n");
	for(i=0;i<N;i++)
    {
    	printf("%d",A[i]) ;
    }
    //first element is not being sort 
	return 0 ;
}
