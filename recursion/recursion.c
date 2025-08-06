/*
 * Name: Aswin chandra M A
 * Date: 06/08/2025
 * Description: print hello n times using recursion 
 */

#include <stdio.h>
void fun(int n)
{
	if(n)
	{
		printf("hello\n");
		fun(n - 1);
	}
}
int main()
{
	int n;
	printf("Enter a num: ");
	scanf("%d", &n);
	fun(n);
	return 0;
}
