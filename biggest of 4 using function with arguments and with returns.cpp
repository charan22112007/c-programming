//biggest of 4 using function with arguments and with returns
#include<stdio.h>
int big(int a,int b,int c,int d);
main()
{
	int a,b,c,d,l;
	printf("Enter any four numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	l=big(a,b,c,d);
	printf("\nthe biggest number in (%d,%d,%d,%d) is : %d",a,b,c,d,l);
}
int big(int a,int b,int c,int d)
{
	if(a>b&&a>c&&a>d)
	{
		return a;
	}
	else if(b>c&&b>d)
	{
		return b;
	}
	else if(c>d)
	{
		return c;
	}
	else
	{
		return d;
	}
}
