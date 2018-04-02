		#include<stdio.h>
			
		 long long int nCr(  int , int  ); 
		
			int main()
			{
			
				int t  ; 
				long int i,j=0 ; 
				scanf("%ld",&t) ;
				int  ans[t];
				while(t--)
				{
				int l  = 0 ;	
				ans[j] = 0 ;	
				long int N,K,n=0,nz=0;
				scanf("%ld%ld",&N,&K);
				long int a ;
				for(i=0;i<N;i++)
				{
				scanf("%ld",&a);
				if(a==0)
				n++ ;
			    nz ++ ;
			    }
			    int d = min(K,nz) ;
		        unsigned long long int nci ;
		        if(n!=0)
		        {
		          d = min(K,nz-n) ;
		         
				 for(l=0;l<=d;l++)
		         {
		         		nci=nCr(nz-n,l);
			    		ans[j] = ans[j] + nci ;
		         }
		        }
		        else if(K%2==0)
			    {
			    	for(l=0;l<=d;l++)
			    	{
			    		//l = (l<n-l)? l : n-l;
			    		nci=nCr(nz,l) ;
			    		ans[j] = ans[j] + nci ;
			    	    l++ ;
					}
			    
			    }
				else 
				{
					for(l=1;l<=d;l++)
			    	{   
			    	
					   nci = nCr(nz,l) ;
					    ans[j] = ans[j] + nci ;
			    		l++ ;
			    	}
			    
				}
				
			  j++ ;	
			}
				for(i=0;i<j;i++)
				{
					printf("%ld\n",ans[i]) ;
				}
				
				return 0 ;
			}
		   
		  int min(int x , int y )
		   {
		   	if(x>y)
		   	return y ;
		   	else
		   	return x ; 
		    }
		    
		
