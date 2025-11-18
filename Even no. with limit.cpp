#include<stdio.h>
main()
{
	int a=1,l;
	printf("\n\t Enter the limit for Even Numbers :");
	scanf("%d",&l);
	while(a<=l)
	{
		if(a%2==0)
		{
			printf("%5d",a);
		}
		a++;
	}
}
