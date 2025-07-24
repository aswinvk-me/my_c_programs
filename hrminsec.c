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
	int num,hr,min,sec;
	printf("Enter a time in seconds: ");
	scanf("%d", &num);
	hr=num/3600;
	min=num/hr;
	sec=num%hr;
	
	printf("%d hrs: %d mins: %d secs",hr,min,sec);
}
