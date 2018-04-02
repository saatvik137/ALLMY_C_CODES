#include<stdio.h>
int main()
{
int test,total,already,cnt=0,i,fil,done[100],assist[50],ctr=0;
scanf("%d",&test);
while(test--)
{
scanf("%d%d",&total,&already);
for(i=0;i<=total;i++)
 
done[i]=0;
 
for(i=0;i<already;i++)
{
scanf("%d",&fil);
 
done[fil]=1;
}
 
 
for(i=1;i<=total;i++)
{
if(done[i]==0)
{
if(ctr%2==0)
{
printf("%d ",i);
ctr++;
}
else
{
assist[cnt]=i;
cnt++;
ctr++;
}
}
else
ctr=0;
}
printf("\n");
for(i=0;i<cnt;i++)
printf("%d ",assist[i]);
printf("\n");
}
return 0;
}
  

