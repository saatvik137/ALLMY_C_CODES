//KRUSKALS IMPLEMENT KARTE HAIN 

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
	int start;
	int end;
	int weight;
};

struct node array[10005];
long sum=0;
int parentarray[10005];
int matrix[1005][1005];
//n==edges




int find(int i)
{
	if(parentarray[i]== -1)
		return i;
	else
		return parentarray[i] = find(parentarray[i]);
}

void kruskal(int vertices, int edges)
{
	int u=0;
	int up=0;
	int start2;
	int end2;
	int weight2;
	int i;
	struct node temp;
	while(u < vertices - 1)
	{
		temp=array[up];
		up++;
		start2 = temp.start;
		end2 = temp.end;
		weight2 = temp.weight;
		int a;
		int b;
		a = find(start2);
		b = find(end2);
		if(a!=b)
		{
			matrix[start2][end2]=weight2;
			parentarray[a]=b;
			u++;
		}
	}
}



int main()
{
	int testcases;
	int t1;
	scanf("%d",&testcases);
	for(t1=1;t1<=testcases;t1++)
	{
		memset(parentarray,-1,sizeof(parentarray));
		memset(matrix,-1,sizeof(matrix));
		sum=0;
		int edges;
		int vertices;
		scanf("%d",&vertices);
		scanf("%d",&edges);
		int i;
		for(i=0;i<edges;i++)
		{
			int start1;
			int end1;
			int weight1;
			scanf("%d",&start1);
			scanf("%d",&end1);
			scanf("%d",&weight1);
			array[i].start = start1-1;
			array[i].end = end1-1;
			array[i].weight = weight1;
		}
		qsort(array,edges);
		int k;
		int j;
		kruskal(vertices,edges);
		for(k=0;k<=vertices;k++)
		{
			for(j=0;j<=vertices;j++)
			{
				if(matrix[k][j]!=-1)
				{
					sum+=matrix[k][j];
					//printf("%d||\n",sum);
				}
			}
		}
		printf("%ld\n",sum);
	}
	return 0;
}

