#include <stdio.h>
int main()
{

	int n;
	printf("Enter the n value : ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{

		
			if(i >= j)
				printf("%d ",j+(n-i) );
			else
				printf(" ");
		}
		printf("\n");
	}
}


/* or we can do in this way
 * more optimized way.
 * ...
 * ...for(int j = n - i + 1; j <= n; j++)
 * 	{
 * 		printf("%d ");
 * 	}
 * 	printf("\n");
 * }
 * */

