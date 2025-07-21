#include <stdio.h>
int main()
{
	int num, count = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num == 0)
		printf("%d\n", 1);
	else
	{
		while( num )
		{
			count++;
			num /= 10;
		}
		printf("%d\n", count);
	}
	return 0;
}
