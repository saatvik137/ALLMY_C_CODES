#include<stdio.h>
#include <stdbool.h>
bool add(int [] , int , int ,int) ;

int main()
{ 
    int t ,n,m , i ,a  ;
	scanf("%d",&t) ;
	while(t--)
	{
		scanf("%d%d",&n,&m) ;
		int arr[n] ;
		for(i = 0 ; i<n ; i++)
		{
		scanf("%d",&a) ;
		arr[i] = a ;  
	    }
        if(add(arr,n,m,0))
		printf("Yes \n") ;
		else
		printf("No \n") ;    
               
    }
return 0 ;
}


bool add(int array[] ,int n , int m , int j)
{   
    if(j<n)
    {
    int i =0;	
    int sum =0 ; 
	for (i ; i<=n;i++)
	{
	sum = sum + array[i] ;
	if(sum == m)
	return true ;
    }
	return add(array,n,m,j+1) ;
    }
    else
    return false ;
}
