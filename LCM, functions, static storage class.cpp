//Finding LCM of two numbers using functions and static storage class
#include<stdio.h>
int lcm(int a,int b);
main()
{
	int n1,n2,r;
	printf("Enter the Numbers : ");
	scanf("%d %d",&n1,&n2);
	if(n1<n2)
	{
		r=lcm(n1,n2);
	}
	else
	{
		r=lcm(n2,n1);
	}
	printf("\nThe LCM of %d and %d is %d",n1,n2,r);
}
int lcm(int a,int b)
{
	static int m=0;
	m=m+b;
	if((m%a==0)&&(m%b==0))
	{
		return m;
	}
	else
	{
		lcm(a,b);
	}
}
