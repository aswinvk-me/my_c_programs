/*
 * Name: Aswin chandra M A
 * Date: 06/08/2025
 * Description: 
 */


#include <stdio.h>
int fun(int n)
{

	if(n)
	{
		return n + fun(n - 1);
	}
	else
		return 0;
}
int main()
{
	int n;
	printf("Enter a num: ");
	scanf("%d", &n);
	printf("Sum of %d natural numbers is %d", n, fun(n));
	return 0;
}
