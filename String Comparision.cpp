//String comparision
#include<stdio.h>
main()
{
	char a[200],b[200];
	int i,j,f=0;
	printf("Enter the first string : ");
	gets(a);
	printf("Enter the second string : ");
	gets(b);
	for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++);
	{
		if(a[i]!=b[j])
		{
			f++;
		}
	}
	if(f==0)
	{
		printf("\nThe two strings are equal.");
	}
	else
	{
		printf("\nThe two strings are not equal.");
	}
}
