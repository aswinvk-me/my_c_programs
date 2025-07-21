#include<stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Enter the n value: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		sum = sum + i; // or we can use sum+= i .
	}
	printf("sum is %d", sum);
	return 0;
}

