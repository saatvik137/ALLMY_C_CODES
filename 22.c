#include<stdio.h>
#include<math.h>
int main()
{
 int t ,N ; 
 scanf("%d",&t) ;
 while(t--)
 {
 scanf("%d",&N) ;
 if(isPrime(N) || isPrimePower(N))
 printf("Chef") ;
 else
 printf("Misha") ;
}
return 0 ;
}

int isPrime(int n){
    int i;
    if(n==0)
    return 0 ;
     
    if (n==2)
        return 1;

    if (n%2==0)
        return 0;

    for (i=3;i<=sqrt(n);i+=2)
        if (n%i==0)
            return 0;

    return 1;
}

int isPrimePower(int n)
{
	int i , temp=1,  num = 0 ;

     
	 	while (num<=n)
	 	{
	 	  	 if(num==n)
	         return 1 ; 
	 	     else
			 {
			  num  = pow(temp,i) ;
			  temp  = newtemp(temp) ;
         		 
		     }
	 	return 0 ;
	 
	    }
	
	
	
}

newtemp(int temp) 
{
	
	while(!isPrime(temp))
   {
   	temp++ ;
   }
	
	return temp ;
}
