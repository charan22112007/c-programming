//bubble sorting
#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter array size : ");
	scanf("%d",&n);
	int a[n];
	//array storing
	for(i=0;i<n;i++)
	{
		printf("\n\tEnter the value for a[%d] location : ",i);
		scanf("%d",&a[i]);
	}
	//sorting in ascending order
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	//printf the sorted array
	printf("\nArray after sorting : ");
	for(i=0;i<n;i++)
	{
		printf("\n\tThe value in a[%d] location : %d",i,a[i]);
	}
}
