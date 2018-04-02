#include <stdio.h>
#include<stdlib.h>
int main(void) 
{
int t,n,x,i;
scanf("%d",&t);
int status=0;
int sum;
while(t--)
{
	status=0;
	sum=0;
scanf("%d",&n);
scanf("%d",&x);
int*array=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
	scanf("%d",&array[i]);
	sum=sum+array[i];
}
if(sum%x==0)
printf("%d\n",sum/x);
else
{
	for(i=0;i<n;i++)
	{
		if(array[i]<x)
		{
			if(((sum-array[i])/x)<(sum/x))
			{
                 
			}
			else 
			break;
		}
	}
	if(i!=n)
	{
		printf("-1\n");
	} 
	else
	{
		printf("%d\n",sum/x);
	}
}
free(array);
}
}
