#include<stdio.h>
int main()
{
int m ,n ,i ,j,k ;
scanf("%d%d",&n,&m) ;
int arr[n]  ;
for(i=0;i<m;i++)
{
 scanf("%d",&j);
 arr[j-1] = 0 ;
}
for(k=0;k<n-m ;k++)
{
 if(arr[k]!=0)
 continue ;
 else 
 break ;
}

for(k=k;k<n;k+2)
{
	printf("CHEFS JOB %d \t" ,k) ;
}

for(k=k+1;k<n;k+2)
{
	printf("ASSISTANTS JOB %d \t",k ) ;
}

return 0 ;
}


