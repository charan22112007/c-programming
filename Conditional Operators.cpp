#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter a,b and c values : ");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\nBiggest of a=%d, b=%d, c=%d is : %d",a,b,c,max);
}
