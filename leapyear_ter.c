/*
 * Name: Aswin chandra M A
 * Date: 24/07/2025
 * Description: check leap year using ternary operator 
 */

#include <stdio.h>
int main()
{
	int yr;
	printf("Enter the year: ");
	scanf("%d", &yr);

	int res = yr%100==0 ? (yr%400==0 ? 1: 0):(yr%4==0 ? 1:0);
	res ? printf("Leap year\n") : printf("Not leap year\n");
	return 0;
}
