#include <stdio.h>
int main()
{
	int num;
	printf("Enter your mark:");
	scanf("%d",&num);
	if(num > 100 || num < 0)
	{	printf("invalid\n");
	return 0;
	}
	else if(num >= 91)
		printf("A grade\n");
	else if(num >= 81)
		printf("B grade\n");
	else if(num >= 71)
		printf("C grade\n");
	else if(num >= 61)
		printf("D grade\n");
	else if(num >= 51)
		printf("E grade\n");
	else
		printf("F grade\n");
	return 0;
}
	

