//Sum of thye elements of array using malloc()
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,*ptr,n,sum=0;
	printf("\nEnter the no. of elements that you wish to enter : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+(*(ptr+i));
	}
	printf("%d",sum);
	free(ptr);
}
