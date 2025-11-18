//sortiong descending order
#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	//array storing
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value in a[%d] location : ",i);
		scanf("%d",&a[i]);
	}
	//array sorting in descending arder
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	printf("\nThe given array after sorting in descending order : ");
	//array printing after sorting in descending order
	for(i=0;i<n;i++)
	{
		printf("\n\tThe value in a[%d] location is : %d",i,a[i]);
	}
}
