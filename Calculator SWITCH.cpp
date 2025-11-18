//calculator code
#include<stdio.h>
main()
{
	int ch;
	float a,b,c;
	printf("Available choices :\n\t1. '+'\n\t2. '-'\n\t3. '/'\n\t4. '*'\n\t5. '%'\nEnter your choice	:");
	scanf("%d",&ch);
	printf("\nEnter your Numbers :");
	scanf("%f %f",&a,&b);
	switch(ch)
	{
		case 1:
			printf("\n%.2f + %.2f = %.2f",a,b,a+b);
			break;
		case 2:
			printf("\n%.2f - %.2f = %.2f",a,b,a-b);
			break;
		case 3:
			printf("\n%.2f / %.2f = %.2f",a,b,a/b);
			break;
		case 4:
			printf("\n%.2f * %.2f = %.2f",a,b,a*b);
			break;
		case 5:
			printf("\n%.2f % %.2f = %.2f",a,b,a%b);
			break;
		default:
			printf("\n\t.....Your choice is in valid.....");
			break;
	}
}
