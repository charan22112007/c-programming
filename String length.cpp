#include<stdio.h>
main()
{
	int l=0,i;
	char a[200];
	printf("Enter the string : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	printf("The length of the given string is : %d",l);
}
