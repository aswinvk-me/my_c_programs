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
	int hr,min,sec;
	printf("Enter a time in seconds: ");
	scanf("%d", &sec);
	hr=sec/3600;
	min=(sec%3600)/60;
	sec=(sec%60);

	printf("%d hrs: %d mins: %d secs\n",hr,min,sec);
}
