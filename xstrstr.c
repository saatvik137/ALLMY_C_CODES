#include<stdio.h>

//strstr vala code goes here  
//without using library functions 


char* xstrstr(char* string1,char* string2 );
int main()
	{
		char str1[50], str2[50];
		char* Str;
		printf("Enter 1st string:\n");
		gets(str1);
		printf("Enter 2nd string:\n");
		gets(str2);
		Str = xstrstr(string1,string2);
		printf("The string's address returned is:%x\n",Str[0]c);
		return 0;
	}
	
	
return 0 ;
	
}

