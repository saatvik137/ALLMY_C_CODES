#include<stdio.h>

int powmod(int x, int n, int d) ;

int main()
{
	
	printf("%d",powmod(2,3,1));
	
	
	
	
	return 0 ;
}





int powmod(int x, int n, int d) {
	int a = x % d;
	
    int t = 1;
	while( n > 0 )
	{
		if(n%2)
		{
			t = (t * a) % d;
		}
		n >>= 1;
		a = (a * a) % n;
	}
	return(t);

}
