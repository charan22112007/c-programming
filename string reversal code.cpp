#include<stdio.h>
main()
{
	char a[100];
	int i,len;
	printf("Enter the string : ");
	gets(a);
	for(i=0;a[i];i++)
	{
		len++;
	}
	for(i=len-1;i>=0;i++)
	{
		printf("%c",a[i]);
	}
}
