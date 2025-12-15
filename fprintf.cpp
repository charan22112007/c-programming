/*Functons regarding files in C
	fprintf(file pointer,"formatspecifier",list os variables);  -----> to print in a file
	fprintf(stdout,"formatspecifier",liat os variables);  -----> to print on the monitor screen
	fscanf(file pointer,"formatspecifier",list os variables);   -----> to scan variables from file
	fscanf(stdin,"formatspecifier",list os variables);   -----> to scan variables from monitor screen*/
#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("D:\\C Programming\\text files in c\\file 1.txt","a");
	fprintf(fp," WORLD");
	fclose(fp);
	return 0;
}
