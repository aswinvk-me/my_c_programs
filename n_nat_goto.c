/*
 * Name: Aswin chandra M A
 * Date: 01/08/2025
 * Description: 
 */

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the 'n' value: ");
	scanf("%d", &n);
	int i = 1;
loop:
	if(i <= n)
	{
		printf("%d ", i++);
		goto loop;
	}
}
