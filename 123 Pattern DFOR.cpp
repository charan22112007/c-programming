#include<stdio.h>
main()
{
	int i,n,j;
	printf("Enter No. of Lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%4d",j);
		}
	}
}
