//PALINDROME CHECKER
#include<stdio.h>
main()
{
	int n,no,k=0,r=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	no=n;
	while(no>0)
	{
		k=no/10;
		r=r*10+k;
		no=no%10;
	}
	if(n==r)
	{
		printf("\n\tThe given number %d is a Palindrome.",n);
	}
	else
	{
		printf("\n\tThe given number %d is NOT a Palindrome.",n);
	}
}
