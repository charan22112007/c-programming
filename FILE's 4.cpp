//FILE's 4
#include<stdio.h>
int main()
{
	FILE *fp;
	char a[1000];
	fp=fopen("D:\\C Programming\\SampleFile2.txt","w");
	printf("Enter the text in the Sample file 2 : ");
	gets(a);
	fprintf(fp,"%s",a);
	fclose(fp);
	return 0;
}
