//biggest if three num with functions with no arguments and with returns
#include<stdio.h>
int biggest();
main()
{
	int big;
	big=biggest();
	printf("\t%d",big);
}
int biggest() {
	int a,b,c;
	printf("Enter the three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("\nThe biggest of %d,%d,%d is : \n\t",a,b,c);
		return a;
	} 
	else if(b>c) 
	{
		printf("\nThe biggest of %d,%d,%d is : \n\t",a,b,c);
		return b;
	} 
	else
	{
		printf("\nThe biggest of %d,%d,%d is : \n\t",a,b,c);
		return c;
	}
}
