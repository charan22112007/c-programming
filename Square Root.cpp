#include<stdio.h>
#include<math.h>
main()
{
	double n,r;
	printf("Enter any no. for the square root value : ");
	scanf("%lf",&n);
	if(n>=0)
	{
		r=sqrt(n);
		printf("\nThe square root of %.2lf is : %.2lf",n,r);
	}
	else
	{
		printf("The given  NO. is in valid....");
	}
}
