#include<stdio.h>
#include<stdlib.h>

struct game* get_winner() ;

void delete_min(int roll) ;

int Dice_Number() ;

void first_round()  ;

struct game* get_winner() ;

void display() ;

int sort() ;

struct game{
	int roll ;
	char name[50] ;
	struct game *next ;
	struct game *prev ;
	int dice ;	
};

struct game *last = NULL;

int main()
{
int n,i=0 ; 
printf("Enter the number of players :");
scanf("%d",&n);
while(n--)
{
  char name[50] ;	
  printf("Enter name of player no. %d ",i+1);
  scanf("%s",name) ;
  insert(i+1) ;
  i++ ; 	
}	
display() ;
first_round();
struct game *j= get_winner() ;
printf("%d",j->roll) ;
return 0 ; 	
}


void first_round()  
{
 	 while(last!=NULL) 
 	 {
 	 printf("FIRST ROUND INITIALISED\n") ;	
 	 last->dice = Dice_Number() ;
 	 printf("%d",last->dice) ;
 	 last=last->next;
     }
}

int Dice_Number()
{
	printf("Dice Number is called ");
 	 int n;
   n=rand()%6 ;  
   return(n);
    printf("RANDOM NO. IS %d \n",n) ;
}

struct game* get_winner()
{
  printf("GETTING WINNER") ;	
  int roll = sort();
  printf("sort returns") ; 
  delete_min(roll) ; 
  first_round() ;
  while(last!=NULL)
 {
 last=last->next ;	
 get_winner();
 }
 return last ; 
}

insert(int roll )
{
	printf("%d\n",roll) ;
 	struct game *tmp,*p;
	tmp = (struct game *)malloc(sizeof(struct game));
	tmp->roll = roll;
	tmp->next=NULL ;
	tmp->prev=NULL;
	
	if(last==NULL)
	last=tmp;
	
	else{ 
	p=last ;
	while(p->next!=NULL)
	p=p->next ;
	tmp->prev = p ;
	p->next=tmp;
	tmp->next=NULL ;
		
	}
printf("INSERT FUNCTION WORKS  \n")	;
}

void display()
{
	
//printf("DISPLAY CALLED\n") ;	
while(last!=NULL)
{
//printf("THIS ENTERED ? \n");	
printf("%d",last->roll) ;	
last=last->next;
}
return ;
}

int sort()
 {
 	printf("SORT IS CALLED\n") ;
 	int min ;
 		min = last->dice ;
 		int roll ;
 		roll=last->roll ;
 		if(last==NULL)
 		return roll ;
	 while(last!=NULL)
 	 {
 	    printf("WHILE LOOP IS ENTERED") ;
		if(last->dice<min)
 	    {
 	    min=last->dice ;
 	    roll=last->roll;
		}
 	 	last=last->next ;
 	}
 	return roll ;
 	printf("SORT FUNCTION WORKS FINE \n");
}


void delete_min(int roll)
 {
 	struct game  *tmp;
	if(last->roll==roll)
	{
		tmp=last;
		last=last->next;  
		last->prev=NULL;
		free(tmp);
	}
	tmp=last->next;
	while(tmp!=NULL )
	{
		if(tmp->roll==roll)     
		{
			tmp->prev->next=tmp->next;
			tmp->next->prev=tmp->prev;
			free(tmp);
			
		}
		tmp=tmp->next;
	}
	
	if(tmp->roll==roll)
	{
		tmp->prev->next=NULL;
		free(tmp);
	
	}

}


