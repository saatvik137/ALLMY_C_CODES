#include<stdio.h>
#include<stdlib.h>
#define SIZE 25 ;

int q[25];

int f=-1 ,r=-1 ;

int isEmpty() ;

push(int x)
{                      
    if( isfull()) 
    {
	printf("Wait till queue still has space \n");
    }
	else
    {
        if(f==-1)
		f=0;
        r=(r+1) % SIZE;
        q[r]=x;
        printf("Student with token number %d added \n",x) ;
    }
}

pop()
{                      
    int x;
    if( isEmpty())
    {
    return; 
    }
	else
    {
        x=q[f];
        if(f==r){ f=-1; r=-1;} 
        else
            f=(f+1) % SIZE;
           printf("%d",x) ; 
        return;
    }
}

int isfull()
{ 
if((f==r+1) || (f ==0 && r==24)) 
{
return 1;
}
else
return 0 ;
}


int main()
{
int j=1 ;	
	
while(1)
{   
    int choice ;
	printf("Choose what you want to do : ") ;
     	printf("1.Enter a student \n");
		printf("2.Serve student \n");
		printf("3.Quit\n");
		printf("Enter your choice : \n");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			push(j++) ;
			break;
		 case 2:
		    pop();
			break;
		 case 3:
		 	exit(1) ;
		 	break ;
       }
}
return 0 ;
}


int isEmpty()
{
if(f==-1) 
{
printf("No student can be served until a student is admitted in the queue  \n");
return 1;
}
else
return 0;
}

