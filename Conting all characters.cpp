//counting the no. of lower case and upper case letters
#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[100];
	int i,l=0,u=0,v=0,n=0,s=0,c=0;
	printf("Enter the string : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			u++;
		}
		else if(a[i]>=97&&a[i]<=122)
		{
			l++;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		a[i]=tolower(a[i]);
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
		{
			v++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			n++;
		}
		else if(a[i]==' ');
		{
			s++;
		}
		else
		{
			c++;
		}
	}
	printf("\nTotal number of :\n\tUppercase letters : %d\n\tLowercase letters : %d\n\tVowels : %d\n\tConsonants : %d\n\tNumbers : %d\n\tSpaces : %d",u,l,v,c,n,s);
	return 0;
}
