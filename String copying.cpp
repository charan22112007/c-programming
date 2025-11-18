#include<stdio.h>
main()
{
	char a[200],b[200];
	int i;
	printf("Enter a string : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\nCopied data is : %s",b);
}
