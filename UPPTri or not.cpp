//upper triangular matrix or not
#include<stdio.h>
main()
{
	int r,c,i,j,f=0;
	printf("Enter row, column size of matrix A : ");
	scanf("%d%d",&r,&c);
	int a[r][c];
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
	printf("\nThe matrix A is :\n");
	for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%4d",a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(((i>j)&&(a[i][j]==0))||(i<=j)&&(a[i][j]!=0))
			{
					f++;
			}
		}
	}
	if(f!=0)
	{
		printf("\nThe given matrix is an UPPER TRIANGULAR MATRIX");
	}
	else
	{
		printf("\nThe given matrix is NOT an UPPER TRIANGULAR MATRIX");
	}
}
