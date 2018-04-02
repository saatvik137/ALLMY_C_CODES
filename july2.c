//electricity in gao 

#include<stdio.h>

int main()
{
	int t ; 
	scanf("%d",&t) ;
	while(t--)
	{
		int len, wire=0 , i=0  ;
		scanf("%d",&len) ;
		char ele[len+1];
		int vil[len] ;
		scanf("%s",&ele) ;
		for(i=0;i<len;i++)
		{
		scanf("%d",&vil[i]) ;		
		}
	    for(i=0;i<len;i++)
		{
			if(ele[i]=='1' && ele[i+1]=='0')
			{
			wire += vil[i+1] -  vil[i] ;
			ele[i+1]='1' ; 
			}
			if(ele[i]=='0' && ele[i+1]=='1')
			{
			wire += vil[i+1] - vil[i] ; 	
		    ele[i]='1' ; 
			}
			if(ele[i]=='0' && ele[i+1]=='0')
			{
				 int t = i ;
				while(ele[t]!='1')
				{
					t++ ;
					
				}
				wire += vil[t] - vil[i] ;    
			}
		}
	printf("%d",wire) ;	
	}
	
	return 0 ;
}
