/*
 * Name: Aswin chandra M A
 * Date: 06/08/2025
 * Description: 
 */

		
#include <stdio.h>
void fun(int n)
{
	if(n)
	{
		fun(n - 1);
		printf("%d ", n);
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
