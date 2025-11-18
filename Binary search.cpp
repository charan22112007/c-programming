/*Binary Search*/
#include<stdio.h>
int main()
{
	int low,high,mid,i,n,search,f=0;
	printf("Enterany array size : ");
	scanf("%d",&n);
	int a[n];
	//Array Entering Part
	printf("\nEnter the values in ascending or descending order...");
	for(i=0;i<n;i++)
	{
		printf("\n\tEnter the value in a[%d] location : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the searching element : ");
	scanf("%d",&search);
	//Searching Part
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(search==a[mid])
		{
			printf("search element is found at %d location",mid);
			f++;
			break;
		}
		else if(search<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
}
