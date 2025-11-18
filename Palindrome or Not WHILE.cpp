#include<stdio.h>
main()
{
	int n,r=0,s=0,temp;
	printf("\n Enter n value :");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(temp==s)
	{
		printf("\n Palindrome");
	}
	else
	{
		printf("\n Not a Palindrome");
	}
}
