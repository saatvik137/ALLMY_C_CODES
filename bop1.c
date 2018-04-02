//moves 
#include<stdio.h>
#include <string.h>

int main()
{
int t ,k , length , i , count = 0 ; 	
char a[1000000]  ,  b[1000000] ;
scanf("%d",&t) ;
int chef[t] ;
unsigned int moves[t] ;
while(t--)
{
int countz = 0 ,counto =0 ,bcountz =0,bcounto = 0,suma=0,sumb =0 ;	
chef[count] = 0 ; 	
moves[count] =0; 
scanf("%s",&a) ;
scanf("%s",&b) ;

length = strlen(a);

for(i=0;i<length;i++)
{
	 if(a[i]=='0')
	 {
	 	countz ++ ;
	 }
	 else
	 {
	 	counto ++ ;
	 }
	 if(b[i]=='0')
	 {
	 	bcountz ++ ;
	 }
	 else
	 {
	 	bcounto ++ ;
	 }
	  
}

if (countz==length || counto == length)
{

	if(bcountz==length || bcounto == length)
	 {
	  chef[count] = 1 ;
	  moves[count] = 1 ;
	 }	
     else 
     {
     
     chef[count] = 0 ; 

}
} 
else 
 { 
    int n = 0 ;
 	chef[count] = 1 ;  
 	for(i=0;i<length;i++)
 	{
 	suma += a[i] ;
	sumb += b[i] ;
	moves[count] = sumb - suma ;
	if(moves[count]==0)
	moves[count]++ ;
 }
 
 }
 count++ ;

}

for(i=0;i<count;i++)
{
if(chef[i]==1)
{
	printf("Lucky Chef\n") ;
	printf("%u\n",moves[i]) ;
}
else
printf("Unlucky Chef\n");
}

return  ;

}


