#include<stdio.h>
#include<string.h>
main()
{
	char a[200],b[200];
	printf("Enter any string :");
	gets(a);
	printf("\nEnter another string : ");
	gets(b);
	strcat(a,b);
	puts(a);
}
