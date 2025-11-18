//Getting every word in the new line
#include<stdio.h>
main()
{
	char a[200];
	int i,l=0;
	printf("Enter the string : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;i<=l;i++)
	{
		if(a[i]==' ')
		{
		a[i]='\n';
		}
	}
	printf("\nThe string with every word in new line : \n");
	printf("%s",a);
}
