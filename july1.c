#include<stdio.h>

int main()
{
	int t ; 
	scanf("%d",&t) ;
	int c = 0 ;
	int ans[t] ;
	while(t--)
	{   
		int div , n , i =0 , sum = 0 , result = 0, gpa,resulto = 1; 
		scanf("%d",&div) ;
		
		for(i=0;i<div;i++)
		{
			scanf("%d",&n) ;
			sum+=n ;
			if(n==2)
			{
			resulto = 0 ;
			}
			if(n==5)
			result = 1 ;
		
		} 
			if(result == 1 && resulto == 1)
			{			
			gpa = sum/div ; 
			if(gpa < 4)
			result = 0 ;
			else 
			result = 1 ;
		   }
		     if(resulto != 0)
			ans[c] = result ; 
			else 
			ans[c] = 0 ;
			c++ ;
		
	}
	int i = 0 ;
	for(i=0;i<c;i++)
	{
		if(ans[i]==0)
		printf("No\n") ;
		else 
		printf("Yes\n") ;
	}
	
	return 0 ;
}
