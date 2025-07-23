#include <stdio.h>
int main()
{

	int n;
	printf("Enter the n value : ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		for(int j = n; j > n - i; j--)
		{

				printf("%d ",j );
		}
		printf("\n");
	}
}

// other way
//  
// for( int i = n; i >= 1; i--)
// {
// 	for( int j = n; j >= i; j--)
// 	{
// 		printf("%d ");
// 	}
// 	printf("\n");
// }
