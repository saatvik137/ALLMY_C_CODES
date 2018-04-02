#include<stdio.h>

int main()
{
	int i , j ;
	
	for(j=0;j<3;j++)
	{
	for(i=0;i<=j;i++)
	printf("j=%d,i=%d",j,i) ;
	printf("\n") ;
    }
	
	int a[10][10] ;
	 
	for(j=0;j<=3;j++)
	{
	for(i=0;i<j;i++)
	scanf("%d",&a[j][i]);
    }
	  
	int k =0 ;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{	
		    
		    while(arr[i]!=0)
			i++ ;
			k=i+1;
			while(arr[k]!=0)
			k++ ;
			if(win[i-1][j])
			arr[k] = 0 ;
			else
			arr[i] = 0 ;
			
		}
	}
	
	for(int i=0;i<n;i++){
			
			if(arr[i]!=0){
				
				System.out.println(i+1);
				break;
			}
	
	return 0 ;
}
