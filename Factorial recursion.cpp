#include<stdio.h>
long int fact(long int n);
main()
{
	long int n,result;
	printf("Enter a number : ");
	scanf("%ld",&n);
	result=fact(n);
	printf("\n%ld factorial is %ld",n,result);
}
long int fact(long int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}
