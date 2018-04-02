#include<stdio.h>
#define MAX 100

int main()
{
   	int A[MAX] ,N,i; 
   	scanf("%d",&N );
   	for(i = 0 ; i < N ; i++)
   	{
   		scanf("%d",&A[i]) ;
   	}
	int key ;
	printf("\n please enter the number to search in your fucking array \n");
	scanf("%d",&key) ;
	
	int k = binarysearch(A,N,key) ;
	printf("%d",k) ;
	
	return 0; 
}

int binarysearch(int *A,int N, int key)
{
	printf("we here \n");
	int index = -1 ; 
	int low = 0 , high = N-1 ; 
	int mid = low + high /2 ;
	while (low<high)
	{
		if(A[mid]==key)
		return mid ; 
		else if (A[mid]<key)
		high = mid-1 ;
		else
		low = mid+1 ;
	}
	return index ;
	
	
	
}
