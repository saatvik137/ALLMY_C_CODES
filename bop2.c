//moves 
#include<stdio.h>
#include <string.h>

int min(int  , int ) ;
int main()
{
int t ,k , length , i , count =0   ; 	
char a[1000001]  ,  b[1000001] ;
scanf("%d",&t) ;
int chef[t] ;
int moves[t] ;
while(t--)
{

int aa =0 ,bb = 0 ; 	
chef[count] = 0 ; 	
moves[count] =0; 
scanf("%s",&a) ;
scanf("%s",&b) ;

length = strlen(a);
int diff =0 ;
i= 0;

for(i=1;i<length;i++)
{
if(a[i] == a[i+1]);
else diff++ ;
}

if(diff)
{
for(i=1;i<length;i++)
{
if(b[i] == b[i+1]);
else diff++ ;
}
}





 if(diff)   
 {
 
	for(i=0;i<length;i++)
	{
		
		if(a[i] == '0' && b[i] == '1' )
		aa++ ;
	    if(a[i] == '1' && b[i] == '0')
		bb++ ;
	}
	
	chef[count] = 1 ;
	if(aa>bb)
    moves[count] = (aa - bb ) + min(aa,bb) ;
    else
    moves[count] = (bb - aa ) + min(aa,bb) ;	
 } 
 

 count++ ;

}

for(i=0;i<count;i++)
{
if(chef[i])
{
	printf("Lucky Chef\n") ;
	printf("%d\n",moves[i]) ;
}
else
printf("Unlucky Chef\n");
}

return 0 ;

}


int min(int x , int y )
{ 
if(x<y)
return x ;
else 
return y ;
}
