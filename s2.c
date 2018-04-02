#include<stdio.h>

int main()
{
	int t,k=0 ;
	scanf("%d",&t) ;
	int ans[t] ;
    int i = 0 , len = 0 ,j=0 ;
    
	while(t--)
	{   
	    char s[10000000] ;  
		len = 0 ;
		scanf("%s",s) ;
		while(s[len]!='\0')
		len++ ;
		
		for(i=0;i<len;)
		{
		
		if(s[i]==s[len])
		continue;
		else
		{
		ans[k] = 0 ;
	     k++ ;
	     break ;
		}
		if(s[i]=='.')
			s[i]=s[len] ;
		
		if(s[len]=='.')
		    s[len] = s[i] ;
		
			i++ ;
		 	len-- ;
			 k++ ;	
		}
		if(ans[t])
		{
		for(j=0;j<len;j++)
		printf("%c",s[j]) ;
        }
	}
	for(t=0 ;t<k;t++)
	{
		if(ans[t]== 0)
		printf("-1\n") ;
		else 
		{
		}
 	}
	
	return 0 ; 
}
