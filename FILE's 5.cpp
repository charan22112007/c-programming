//FILE's 5 numbers
#include<stdio.h>
main()
{
	FILE *fp;
	int n,i;
	fp=fopen("D:\\C Programming\\SampleFile3NUM.txt","w");
	printf("Enter some numbers : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n);
		putw(n,fp);
	}
	fclose(fp);
	fp=fopen("D:\\C Programming\\SampleFile3NUM.txt","r");
	printf("The given numbers are : ");
	while((n=getw(fp))!=EOF)
	{
		printf("\n%d",n);
	}
	fclose(fp);
}
