#include<stdio.h>

main()
{
	char email[100]="tapasya1680@gmail.com";
	
	char pass[100]="tapasya1680";
	
	char email2[100];
	
	printf("enter your email= ");
	gets(email2);
	
	char pass2[100];
	
	printf("enter your password=");
	gets(pass2);
	
	if(strcmp(email,email2)==0)
	{
		if(strcmp(pass,pass2)==0)
		{
			printf("login succsesfull");
		}
		else
		{
			printf("your password is wrong");
		}
	}
	else
	{
		printf("your email is wrong");
	}
}
