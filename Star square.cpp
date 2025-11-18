#include<stdio.h>
main()
{
	int i,n,j;
	printf("Enter No. of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=n;j++)
		{
			printf(" *");
		}
	}
}
