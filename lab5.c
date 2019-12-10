#include<stdio.h>
void reverse(char s[])
{	
	if(s[0]!='\0')
{
	reverse(s+1);
		printf("%c",*s);
	}
	else
	{
		/* code */
	}
	
}
int  main(void)
{
	char s[200]={'\0'};
	printf("s=~s\n");
	reverse(s);
	printf("\n");
}