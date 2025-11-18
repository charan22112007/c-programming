//matrix multiplication
#include<stdio.h>
main()
{
	int r1,c1,r2,c2,i,j,k;
	//size declaration
	printf("Enter row, column size of matrix A : ");
	scanf("%d%d",&r1,&c1);
	printf("Enter row, column size of matrix B : ");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		int a[r1][c1],b[r2][c2],m[r1][c2];
		//Matrix storing
		printf("\nEnter the matrix A values : ");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("\nEnter the value in a[%d][%d] location : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nEnter the matrix B values : ");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("\nEnter the value in b[%d][%d] location : ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		//Array printing
		printf("\nThe matrix A is :\n");
		for(i=0;i<r1;i++)
		{
			printf("\n\t\t");
			for(j=0;j<c1;j++)
			{
				printf("%4d",a[i][j]);
			}
		}
		printf("\nThe matrix B is :\n");
		for(i=0;i<r2;i++)
		{
			printf("\n\t\t");
			for(j=0;j<c2;j++)
			{
				printf("%4d",b[i][j]);
			}
		}
		//matrix multiplication
		printf("\nThe matrix after multiplication, M = A * B is : \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				m[i][j]=0;
				for(k=0;k<c1;k++)
				{
					m[i][j]=m[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<r1;i++)
		{
			printf("\n\t\t");
			for(j=0;j<c2;j++)
			{
				printf("%4d",m[i][j]);
			}
		}
	}
	else
	{
		printf("\n....!!! ERROR !!!....");
		printf("\nMatrix multiplication of those orders, is NOT POSSIBLE...");
	}
}
