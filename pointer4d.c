#include<stdio.h>
int main()
{
	 
	    
        int i , j , k , l ;
        int row1 = 0,col1 = 0,row2 = 0,col2 = 0;
        printf("Enter the dimensions of the  array:\n");
        scanf("%d%d%d%d",&row1,&col1,&row2,&col2); 
        int a[row1][col1][row2][col2] ;
	    char* p = &a;
		for( i = 0 ; i <row1; i++ )
            {
                for( j = 0 ; j < col1; j++ )
                    {
                        for( k = 0 ; k < row2; k++ )
                            {
                                for( l = 0 ; l < col2; l++ )
                                    {
                                        scanf("%c",&(p+i)(p+j)(p+k)(p+l));
                                    }
                            }
                    }
            }
       
        for( i = 0 ; i <row1; i++ )
            {
                for( j = 0 ; j < col1; j++ )
                    {
                        for( k = 0 ; k < row2; k++ )
                            {
                                for( l = 0 ; l < col2; l++ )
                                    {
                                        printf("%c",&(p + i)(p + j)(p + k)(p + l));
                                    }
                            }
                    }
                }
	
	
	
	
	return 0 ;
}
