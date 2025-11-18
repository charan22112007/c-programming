#include<stdio.h>
int main()
{
	int arr[100],n,s=0,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	printf("\nEnter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[1]);
	}
	for(i=0;i<n;i++)
	{
		s=s+arr[i];
	}
	printf("\n Sum of all the values in the array : %d",s);
	return 0;
}
