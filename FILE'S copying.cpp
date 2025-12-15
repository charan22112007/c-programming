//FILE'S copying
#include<stdio.h>
main()
{
	FILE *fp,*fp1;
	char ch;
	int i=0;
	fp=fopen("D:\\C Programming\\text files in c\\CSE_13.txt","w");
	while(i<10)
	{
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	fp=fopen("D:\\C Programming\\text files in c\\CSE_13.txt","r");
	fp1=fopen("D:\\C Programming\\text files in c\\NEW_CSE_13.txt","w");
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fp1);
	}
	printf("\nCopied Successfully");
	fclose(fp);
	fclose(fp1);
}
