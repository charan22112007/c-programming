//Subtraction using functions with arguments and with returns
#include<stdio.h>
int diff(int a,int b);
main()
{
	int x,y,dif;
	printf("Enter the numbers to be subtracted : ");
	scanf("%d%d",&x,&y);
	dif=diff(x,y);
	printf("\nThe Difference of %d and %d is : %d",x,y,dif);
}
int diff(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
