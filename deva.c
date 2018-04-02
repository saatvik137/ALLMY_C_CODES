#include<stdio.h>

int main()

{
	int n,Q,max,min ,i;
   	scanf("%d%d\n",&n,&Q);
   	if(n>2)
	{
	int m ,num1,num2;
	m = n+1 ; 
   	scanf("%d",&max) ;
   	min = max ;
   	if(n%2==0)
   	{
   		m=m-1 ; 
   		scanf("%d",&min);
   	}
	if(min>max){
     int temp ; 
    temp = min;
    min    = max;
    max   = temp;
    }
	
	for(i=1;i<=m/2-1;i++)
	{
		scanf("%d%d",&num1,&num2);
		if(num1>num2)
		{
			if(num1>max)
			max=num1;
			if(num2<min)
			min=num2 ;
		}
		else
		{
			if(num2>max)
			max=num2;
			if(num1<min)
			min=num1;		}
     	}
}
 	else if(n==2)
 	{
 		int num1,num2;
 		scanf("%d%d",&num1,&num2);
 		if(num1>num2)
 		{
 			max= num1 ; 
 			min = num2 ;
 		}
 		else
		 {
		 	max = num2 ; 
		 	min = num1 ;
		 } 
 		 
 		
 	}
 	else if ( n == 1)
 	{
 		int num1 ; 
 		scanf("%d",&num1);
 		max = min = num1 ;
 	}
 	
 	else
	 {
 		
 	}
 	
 		
 	int t[Q];
	for(i=0;i<Q;i++)
	{
	scanf("%d",&t[i]) ;
    }
	for(i=0;i<Q;i++){
	if(t[i]>= min && t[i]<=max)
    printf("Yes\n") ;
    else 
	printf("No\n"); 
    }
    return 0 ;
}


