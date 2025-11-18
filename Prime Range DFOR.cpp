#include<stdio.h>
main()
{
	int n,i,j,c=0;
	printf("Enter a final range : ");
	scanf("%d",&n);
	printf("\nPrime Numbers till %d are :",n);
	for(i=2;i<=n;i++)
	{ 
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}	
		if(c==2)
		{
			printf("%4d",i);
		}
	}
}
