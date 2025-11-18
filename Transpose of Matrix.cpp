//transpose of matrix
#include<stdio.h>
main()
{
	int r,c,i,j;
	//size declaration
	printf("Enter row, column size of matrix A : ");
	scanf("%d%d",&r,&c);
	int a[r][c],t[r][c];
	//Matrix storing
	printf("\nEnter the matrix A values : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the value in a[%d][%d] location : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Array printing
	printf("\nThe matrix A is :\n");
	for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%4d",a[i][j]);
		}
	}
	//transpose
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("\nThe transpose of matrix A is : \n");
	for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%4d",t[i][j]);
		}
	}
}
