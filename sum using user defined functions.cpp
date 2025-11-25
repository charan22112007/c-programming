//addition using user defined function's
#include<stdio.h>
int sum(int a,int b);
main()
{
	int x,y,res;
	printf("Enter two values for sum : ");
	scanf("%d %d",&x,&y);
	res=sum(x,y);
	printf("%d",res);
}
int sum(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
