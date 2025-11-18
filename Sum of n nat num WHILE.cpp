#include<stdio.h>
main()
{
	int n,no,s=0;
	printf("Enter the limit for the sum : ");
	scanf("%d",&n);
	no=n;
	while(no>0)
	{
		s=s+no;
		no--;
	}
	printf("\n\tThe sum of %d Natural Numbers is : %d",n,s);
}
