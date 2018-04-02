#include<stdio.h>
#include<stdlib.h>

int main()
{
int G,I,Q,N ,K,i ;
scanf("%d",&G) ;
while(G--)
{
scanf("%d%d%d",&I,&N,&K) ;
char *A=(char*)calloc(N,sizeof(char));
if(I==1)
/* TODO (#1#): 
 */
{
	for(i=0;i<N;i++)
	A[i]='H';
}
else
{
   	for(i=0;i<N;i++)
	A[i]= 'T';
}
while(N--)
{   
    int K = 1 ; 
	for(i=0;i<K;i++)
    A[i]=reverse(A[i]);
    K++ ;
}
}
return 0 ;
}

char reverse(char B)
{
	if(B=='H')
	return 'T' ;
	else
	return 'H' ;
}
