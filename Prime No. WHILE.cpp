#include<stdio.h>
int main()
{
	int n,no,c;
	printf("Enter your No. :");
	scanf("%d",&n);
	no=2;
	while(no<=n)
	{
		if(n%no==0)
		{
			c++;
		}
		no++;
	}
	if(c==1)
	{
		printf("\n\t The no. %d is a Prime Number",n);
	}
	else
	{
		printf("\n\tThe no. %d is NOT a Prime Number",n);
	}
}
