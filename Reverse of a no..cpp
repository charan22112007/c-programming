/*Reverse the No.*/
#include<stdio.h>
main()
{
	int n,no,k,r=0;
	printf("Enter the number :");
	scanf("%d",&n);
	no=n;
	while(no>0)
	{
		k=no%10;
		r=r*10+k;
		no=no/10;
	}
	printf("\nReverse number of %d is : %d",n,r);
}
