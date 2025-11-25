//functions with no arguments no returns
#include<stdio.h>
void addition();
main()
{
	addition();
	return 0;
}
void addition()
{
	int a,b,c;
	printf("Enter any two values : ");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("%d",c);
}

