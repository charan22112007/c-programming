#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==1)
	{
		printf("\nPrinme Number");
	}
	else
	{
		printf("\nNot a Prime Number");
	}
}
