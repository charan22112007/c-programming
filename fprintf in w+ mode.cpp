#include<stdio.h>
main()
{
	FILE *pp;
	pp=fopen("D:\\C Programming\\text files in c\\file 2.txt","w+");
	fprintf(pp,"File opened in w+ mode");
	fclose(pp);
	return 0;
}
