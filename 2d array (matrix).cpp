//2 dimensional array
#include<stdio.h>
main()
{
	int r,c,i,j;
	//size declaration
	printf("Enter row size : ");
	scanf("%d",&r);
	printf("\nEnter the column size : ");
	scanf("%d",&c);
	int a[r][c];
	//Array storing
	printf("\nEnter the array values : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the value in a[%d][%d] location : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Array printing
	printf("The given 2 dimensional array(matrix) is :\n");
	for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%4d",a[i][j]);
		}
	}
}
