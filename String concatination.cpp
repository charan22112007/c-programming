//String concatination
#include<stdio.h>
main()
{
	char a[200],b[200];
	int i,l=0;
	printf("Enter a the first sring : ");
	gets(a);
	printf("Enter a the second sring : ");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		l++;
	}
	a[l+1]=' ';
	for(i=0;b[i]!='\0';l++,i++)
	{
		a[l]=b[i];
	}
	printf("\nThe string after concatination is : \n\t'%s'",a);
}
