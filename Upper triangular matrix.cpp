//upper triangular matrix
#include<stdio.h>
main()
{
	int r,c,i,j;
	printf("Enter row, column size of matrix A : ");
	scanf("%d%d",&r,&c);
	int a[r][c],ut[r][c];
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
	//matrix printing
	printf("\nThe matrix A is :\n");
	for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%4d",a[i][j]);
		}
	}
	printf("\nThe upper triangular matrix of matrix A is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i>j)
			{
				ut[i][j]=0;
			}
			else
			{
				ut[i][j]=a[i][j];
			}
		}
	}
		for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%4d",ut[i][j]);
		}
	}
}
