#include <stdio.h>
 
int main()
{
short t;
int n;
int count=0;
long speed_0,speed_1;
short i;
int j;
scanf("%hd",&t);
for(i=0;i<t;i++)
{
	scanf("%d",&n);
	count=1;
	for(j=0;j<n;j++)
	{
		if(j==0)
		{
			scanf("%ld",&speed_0);
		}
		else
		{
			scanf("%ld",&speed_1);
			if(speed_1<=speed_0)
			{
				count++;
				speed_0=speed_1;
			}
		}
	}
	printf("%d\n",count);
}
}
