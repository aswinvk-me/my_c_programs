/*
 * Name: Aswin chandra M A
 * Date: 24/07/2025
 * Description: 
 * Sample Input: 
 * Sample Output: 
 */


#include <stdio.h>
int main()
{

	int n;
	printf("Enter the n value : ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n - i; j++)
		{
			printf("  ");
		}
		for(int k = 1; k <= i * 2 - 1; k++)
		{
			printf("%d ",);
		}
		printf("\n");
	}
}
