//Pointer Array 2
#include<stdio.h>
main()
{
	int s,i,*ptr;
	printf("Enter the size of the array : ");
	scanf("%d",&s);
	int a[s];
	ptr=a;
	printf("\nEnter the array values : ");
	for(i=0;i<s;i++)
	{
		scanf("\t%d",(ptr+i));
	}
	for(i=0;i<s;i++)
	{
		printf("\t%d",*(ptr+i));
	}
}
