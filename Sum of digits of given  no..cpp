#include<stdio.h>
main()
{
	int a,n=0,s=0;
	printf("Enter no. :");
	scanf("%d",&a);
	while(a>0)
	{
		n=a%10;
		s=s+n;
		a=a/10;
	}
	printf("\nSum of the digits of the given number is : %d",s);
}
