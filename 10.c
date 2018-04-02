#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 int i,c[t];
 for(i=0;i<t;i++)
 {
  c[i]=0;
  int n,j,l;
  scanf("%d",&n);
  int a[n];
  for(j=0;j<n;j++)
  {
   scanf("%ld",&a[j]);
  }
  scanf("%d",&l);
  for(j=0;j<n;j++)
  {
   if(a[l-1]>=a[j])
   {
    c[i]++;
   }
  }
 }
 for(i=0;i<t;i++)
 {
  printf("%d\n",c[i]);
   }
   return 0;
} 
