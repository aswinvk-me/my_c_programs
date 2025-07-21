#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num >=0 && num <= 100)
	{
		printf("The number is valid\n");
		return 0;
	}
	
	printf("Invalid\n");
}
