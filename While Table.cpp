#include<stdio.h>
int main()
{
	int a,b=1;
	printf("Enter the table number number that you want :");
	scanf("%d",&a);
	while(b<=12)
	{
		printf("\n%3d * %3d = %4d",a,b,a*b);
		b++;
	}
}
