//matrix addition
#include<stdio.h>
main()
{
	int r,c,i,j;
	//size declaration
	printf("Enter row, column size of matrix A,B : ");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c];
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
	printf("\nEnter the matrix B values : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the value in b[%d][%d] location : ",i,j);
			scanf("%d",&b[i][j]);
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
	printf("\nThe matrix B is :\n");
	for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%4d",b[i][j]);
		}
	}
	printf("\nThe matrix after addition, S = A + B is : \n");
	for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%4d",a[i][j]+b[i][j]);
		}
	}
}
