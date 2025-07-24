/*
 * Name: Aswin chandra M A
 * Date: 24/07/2025
 * Description: pattern
 * Sample Input: 5
 * Sample Output:       1
		      1 2 1
    		    1 2 3 2 1
  		  1 2 3 4 3 2 1
		1 2 3 4 5 4 3 2 1 
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
		for(int k = 1; k <= i; k++)
		{
			printf("%d ",k);
		}
		for(int l = i - 1; l >= 1; l--)
		{
			printf("%d ",l);
		}
		printf("\n");
	}
}
