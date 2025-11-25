#include<stdio.h>
int sd(int n)
{
	if(n!=0)
	{
		return (n%10+sd(n/10));
	}
	else
	{
		return 0;
	}
}
main()
{
	int n;
	printf("Enter the Number : ");
	scanf("%d",&n);
	printf("\nThe sum of digits of %d is : %d",n,sd(n));
}
