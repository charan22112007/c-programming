//FILE's 2
#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("SampleFile1.txt","r");
	printf("The text in the sample file is : ");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
