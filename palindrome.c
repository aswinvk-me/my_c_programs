
#include <stdio.h>
int main()
{
	int num, rev = 0, temp;
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;

		while( num )
		{
			rev = rev * 10 + num % 10;
			num /= 10;
		}
		if(rev == temp)
			printf("The number is a palindrome.\n");
		else
			printf("The number is not a palindrome.\n");

}
