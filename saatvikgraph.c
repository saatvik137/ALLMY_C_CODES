#include<stdio.h>
#include<stdlib.h>

struct edge {
	int vertexindex ;
	struct edge *edgeptr ;
 };
 
 struct vertex {
	int vertexkey ;
	struct edge *edgeptr ;
 };
 
 int vertexcount = 0 ;
 struct vertex graph[10] ;
 
 void insertvertex(int key)
 {
 	graph[vertexcount].vertexkey=key ;
 	graph[vertexcount].edgeptr=NULL ;
 	vertexcount++;
 }
 
 void insertedge(int vertex1,int vertex2)
 {
 	struct edge *e,*e1,*e2 ;
 	
 	e =graph[vertex1].edgeptr ;
 	
 	e1 = (struct edge *)malloc(sizeof(struct edge)) ;
 	e1->vertexindex=vertex2;
 	e1->edgeptr = NULL ;
 	
 	while(e && e->edgeptr)
 	{
 		e=e->edgeptr ;
 	}
 	if(e)
 	{
 		e->edgeptr = e1 ;
 	}
 	else
 	graph[vertex1].edgeptr = e1 ;
  }
  
  void printgraph()
  {
  	int i ; 
  	struct edge *e ;
  	for(i=0;i<vertexcount;++i)
	 {
	  printf("%d %d",i,graph[i].vertexkey);
	 e=graph[i].edgeptr ;
     
      
    while(e)
    {
	printf("->%d ",e->vertexindex );
    e=e->edgeptr;
     }
     printf("\n");
 
}
  }  
  
  void main()
  {
  	insertvertex(5) ;
	insertvertex(6) ;
	insertvertex(7) ;
	insertvertex(9);
    insertvertex(10);
	insertedge(0,1);
    insertedge(0,2);
    insertedge(1,3);
    printgraph();

}
