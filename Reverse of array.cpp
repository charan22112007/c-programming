//Recerse if array
#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the string values accordingly : ");
	for(i=0;i<n;i++)
	{
		printf("\n\ta[%d] = ",i);
		scanf("%d",a[i]);
	}
	printf("\nThe given array values : ");
	for(i=0;i<n;i++)
	{
		printf("\n\ta[%d] = %d",i,a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		a[i]=a[n-i-1];
	}
	for(i=0;i<n;i++)
	{
		printf("\n\ta[%d] = %d",i,a[i]);
	}
}
