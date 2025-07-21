#include <stdio.h>
int main()
{
	int num, flag = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	for( int i = 2; i*i <= num; i++ )
	{
		if(num % i == 0)
		{
			printf("Not a prime\n");
			flag = 1;
			break;
		}
	}
	if( num <=1 )
		printf("Not a prime\n");
	else if(flag == 0)
		printf("Yes, prime\n");
}

