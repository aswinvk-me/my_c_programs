/*
 * Name: Aswin chandra M A
 * Date: 24/07/2025
 * Description: 
 * Sample Input: 
 * Sample Output: 
 */

#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three numbers : ");
	scanf("%d %d %d", &a, &b, &c);
	int large = a > b ? ( a > c ? a:c ) : (b>c ? b:c);
	printf("Largest =%d\n", large);
	return 0;
}
