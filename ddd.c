#include<stdio.h>

long long int seq( long long int) ;

int main()

{
	long long int t,i ; 
	scanf("%lld",&t);
    long long int kth[t] ;
	long long int c =0 ;
	while(t--)
	{	
	long long int N ;
	scanf("%lld",&N) ;
	
	
    kth[c] = seq(N-1) ;
    c++ ;
	}
	for(i=0;i<c;i++)
	{
		printf("%lld\n",kth[i]);
	}
	return 0 ;
}



/*int createNumber(int n) {
    int result = 0;
    while (n>0) 
	{
        result *= 10;
        result = result + (n%5);
        n /= 5;
    }
    return result*2 ;
}
*/

long long int seq(long long int n){
	   
	   if (n) 
       return 10 * seq(n / 5) + (n % 5) * 2 ; 
	   
	   else 
	   return 0; 
    
 }

