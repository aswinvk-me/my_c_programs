#include <stdio.h>
int main()
{
	int l, i = 2, n1 = 0, n2 = 1, sum;
	printf("Enter a limit for fibunaci: ");
	scanf("%d", &l);
	printf("%d %d ", n1, n2);
	while( i <= l-1 )
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%d ", sum);
		i++;
	}
}

		

		
