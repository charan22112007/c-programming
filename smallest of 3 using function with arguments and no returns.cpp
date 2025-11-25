//smallest of three using function with arguments and no returns
#include<stdio.h>
void small(int a,int b,int c)
{
	if(a<b&&a<c)
	{
		printf("\nThe smallest among %d,%d,%d is : %d",a,b,c,a);
	}
	else if(b<c)
	{
		printf("\nThe smallest among %d,%d,%d is : %d",a,b,c,b);
	}
	else
	{
		printf("\nThe smallest among %d,%d,%d is : %d",a,b,c,c);
	}
}
main()
{
	int a,b,c;
	printf("Enter any three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	small(a,b,sc);
}
