//FILE's 6 creating a text file
//FILE's 6
#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("D:\\C Programming\\text files in c\\CSE_13.txt","w");
	fprintf(fp,"Aditya University");
	fclose(fp);
	return 0;
}
