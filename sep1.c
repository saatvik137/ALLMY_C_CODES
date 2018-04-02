#include<stdio.h>

int main()
{
	int t,k=0 ;
	scanf("%d",&t) ;
	int ans[t] ;
    while(t--)
    
	{
		int i = 0 , len = 0 , zero = 0 , one =0 ;  
		char s[10000] ;
		scanf("%s",s) ;
		while(s[len]!='\0')
		len++ ;
		
		for(i = 0 ; i<len;i++ )
		{
			if(s[i]=='0')
			zero++ ;
			if(s[i]=='1')
			one++ ;
			if(one>1 && zero>1)
			break ;
		}
		if(one==len-1||zero==len-1)
		ans[k] = 1 ;
		
		else 
		ans[k] = 0 ; 
		k++ ;
	
		
	}
	    for (t=0 ; t<k;t++)
{
        if(ans[t]==1)
		printf("Yes\n") ;
		else
		printf("No\n") ;	
	

}
	return 0 ; 
}
