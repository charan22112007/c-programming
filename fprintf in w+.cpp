#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("D:\C Programming\text files in c\file 2.txt","r+");
	fprintf(fp,"file opened in r+ mode");
	fclose(fp);
	return 0;
}
