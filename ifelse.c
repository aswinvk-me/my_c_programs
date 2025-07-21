#include <stdio.h>
int main()
{
	int num;
	printf("Enter a mark");
	scanf("%d",&num);
	if(num >=0 && num <= 100)
		printf("valid\n");
	else
		printf("invalid\n");
	return 0;
}
