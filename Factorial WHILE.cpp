#include<stdio.h>
main()
{
	int n,no,f=1;
	printf("Enter the factorial No. : ");
	scanf("%d",&n);
	no=n;
	while(no>0)
	{
		f=f*no;
		no--;
	}
	printf("\n\tThe Factorial of %d is : %d",n,f);
}
