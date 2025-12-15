//FILE's 3
#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("D:\\C Programming\\SampleFile2.txt","r");
	printf("The text in the sample file is : ");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
