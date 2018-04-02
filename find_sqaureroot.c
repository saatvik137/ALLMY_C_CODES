#include<stdio.h>

int main()
{
	int N ; 
	scanf("%d",&N) ;
	
	printf("OKAYY NOW I WILL FIND ITS SQAURE ROOT\n") ;
	
	findsqaureroot(N) ;
	
	
	
	return 0 ; 
}


int findsqaureroot(N)
{
	int low=0 , high = N/2 ;
	int ans ,mid ;
	
	while(low<high)
	{
	mid = (low +high)/2 ;
	if(mid*mid==N)
	return mid ;
	else if(mid*mid<N)
	{
	    beg = mid+1;
		ans = mid ;
	}
	else 
	 end = mid-1 ; 
    } 
	return ans ;
}
