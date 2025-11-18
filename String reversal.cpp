//1st cognify internship task
//string reversal program
#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	printf("Enter a statement/string the you want to reverse : ");
	gets(a);
	strrev(a);
	printf("\nThe reversed statement/string is : \n\t'%s'",a);
}
