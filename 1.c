#include<stdio.h>
void main()
{
int a , b ,c;
scanf("%d%d",&a,&b) ;
c = a-b ;
if((c%10 == 0)||(c%10 == 1))
c = c -1 ;
else 
c = c+1 ;
printf("%d" , c ) ;
}


