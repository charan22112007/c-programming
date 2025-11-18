//searching duplicate values
#include<stdio.h>
main()
{
	int n,i,j,f=0;
	printf("Enter array size : ");
	scanf("%d",&n);
	int a[n];
	//loading array
	for(i=0;i<n;i++)
	{
		printf("\n\tEnter the value to be stored in a[%d] location : ",i);
		scanf("%d",&a[i]);
	}
	//searching duplicate values
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
				f++;
			}
		}
		printf("\nThe value %d is stored %d times..",a[i],f);
	}
}
