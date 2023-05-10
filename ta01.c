#include<stdio.h>
#include<string.h>

main()

{
    char ch1[100];
    char ch2[100];
     
    printf("enter string=");
    scanf("%s",ch1);
     
	strcpy(ch2,ch1);
	strrev(ch2);
	
	if(strcmp(ch1,ch2)==0)
	{
		printf("string is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}
}
