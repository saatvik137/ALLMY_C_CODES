#include<stdio.h>

int main()
{ 
  int rem , N,M,multiplier,kth,i=0,K ;
  scanf("%d",&N);
  rem = N%5 ;
  K = N-rem;
  N=N/5 ;
  M=N ;
  while(M)
  {
  M=N/5 ;
  if(M>5)
  i++ ;		
  }
  multiplier = i*20 ;
  kth = N*multiplier + K*2 ;
  printf("%d",kth) ;

 return 0 ;
}


