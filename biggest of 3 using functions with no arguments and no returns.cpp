//biggest if three num with functions of no arguments and no returns
#include<stdio.h>
void biggest();
main()
{
	biggest();
}
void biggest()
{
	int a,b,c;
	printf("Enter the three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("\n %d is big ",a);
	}
	else if(b>c)
	{
		printf("\n %d is big ",b);
	}
	else
	{
		printf("\n %d is big ",c);
	}
}
