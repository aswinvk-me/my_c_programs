/*
 * Name: Aswin chandra M A
 * Date: 04/08/2025
 * Description: 
 */

#include <stdio.h>
int check_prime(int);
void print_prime(int);
int main()
{
	int n;
	printf("Enter the n value: ");
	scanf("%d", &n);
	print_prime(n);
	return 0;
}
void print_prime(int n)
{
	for(int i = 2; i <= n; i++)
	{
		if(check_prime(i))
			printf("%d ", i);
	}
}
int check_prime(int num)
{
	for(int i = 2; i*i <= num; i++)
	{
		if(num % i == 0)
			return 0;
	}
	return 1;
}

	
