#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num < 0)
		printf("negative integer\n");
	else if(num > 0)
		printf("positive integer\n");
	else
		printf("the number is zero\n");
	return 0;
}
