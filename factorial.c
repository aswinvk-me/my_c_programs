#include<stdio.h>
int main()
{
	int i, n, fact=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for( int i = 1; i <= n; i++)
	{
		fact*= i;
	}
	printf("%d is factorial of %d numbers.\n", fact, n);
	return 0;
}
