#include<stdio.h>
#include<string.h>

char encode(char) ;
char decode(char) ;

int main()
{
	char string_to_encode[100]  ;
	int i = 0 ;
	
	printf("Enter string to encode : \n");
	scanf("%s",string_to_encode) ;
	
	int len = 0 ;
	
	for(len=0; string_to_encode[len]!='\0';len++);
	
	printf(" lenght of the string entered %d\n",len) ;
	
	int j =0 ;
	
	printf("1. encode \t 2. decode \n please choose one option");
	scanf("%d",&j) ;
	//gets(string_to_encode) ;
    switch(j)
    {
    case 1 :
	{
	for(i=0;i<len;i++) 
	string_to_encode[i] = encode(string_to_encode[i]) ;
    }
    break ;
    case 2 : 
    {
	for(i=0;i<len;i++) 
	string_to_encode[i] = decode(string_to_encode[i]) ;
    }
    break ; 
}
    printf("here\n") ;
	printf("Encoded string is %s : \n" , string_to_encode) ;
	
	
	return 0 ;
}

char encode(char ch)
{
ch = ch-20 ; 
return (ch) ;
}

char decode(char ch)
{
ch = ch+20 ;
return (ch) ;
}

