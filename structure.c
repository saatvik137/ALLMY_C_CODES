#include<stdio.h>

//structure with arrays 

int j ;

struct person {
	char name[20] ;
	int age ;
	int weight ;
	int height ;
}p[5];

int get_max_weight() ;

int get_max() ;

int get_input() ; 

int get_average() ;

int main()
{
	int i = 0 ;
	
	do
	{
	
	printf("\nPlease choose which function you want to perform : \n 1.Insert into structure \n 2.get average weight \n 3. get max height \n 4.get max weight") ;
	scanf("%d",&i) ;
	switch(i)
	{
	case 1: get_input() ; 	
	break ;
	case 2: get_average() ;
	break;
	case 3 : get_max() ;
	break ;
	case 4 : get_max_weight() ;
	break ;
	
	
    }
    
    } while(i!=0) ;
	return 0 ;
}

int get_input()
{
	
	for(j=0;j<5;j++)
	{
		printf("Enter name for person no. %d :\n",j+1) ;
		scanf("%s",p[j].name) ;
		printf("Enter age :\n") ;
		scanf("%d",&p[j].age) ;
		printf("Enter weight :\n") ;
		scanf("%d",&p[j].weight) ;
		printf("Enter height :\n") ;
		scanf("%d",&p[j].height) ;
	} 
	return 0  ;
}


int get_average()
{
	int to_wt ,  to_ht ;
	for(j=0;j<5;j++)
	{
		to_wt += p[j].weight ;
		to_ht += p[j].height ;
	}
	printf("Average weight  = %d \n Average height = %d ",to_wt/5 ,to_ht/5) ;
	
	return 0 ;
}  

int get_max()
{
		    
			int	max,min;
			
			
			max=p[0].height;
			min=p[0].height;
					
				for(j=0;j<5;j++)
				{
				
					    if(p[j].height>max)
						max=p[j].height;
						if(p[j].height<min)
						min=p[j].height;
					
				}
				printf("maximum height is %d\n",max);
				printf("minimum height is %d\n",min);
				printf("\n");
	return 0 ;
} 



int get_max_weight()
{

			int	min,max;
			
						min=p[0].weight;
						max=p[0].weight;
				
				for(j=0;j<5;j++)
				{
					
					
						if(p[j].weight>max)
						max=p[j].weight;

						if(p[j].weight<min)
						min=p[j].weight;
					}
				
				
				for(j=0;j<5;j++)
				{
					if(p[j].weight==min)
					{
						printf("%s has the lowest weight\n",p[j].name);
					}
					if(p[j].weight==max)
					{
						printf("%s has the highest weight\n",p[j].name);
					}
				}	
	
return 0 ;
}



