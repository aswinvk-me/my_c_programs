#include <stdio.h>
int main()
{
	int num, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while( num )
		{
			sum += num % 10;
			num /= 10;
		}	
		printf("%d\n", sum);
}
