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
			int n = j%2;
			if(i >= j)
				printf("%d ", n);
			else
				printf(" ");
		}
		printf("\n");
	}
}
