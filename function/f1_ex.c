/*
 * Name: Aswin chandra M A
 * Date: 04/08/2025
 * Description: 
 */

#include <stdio.h>
int Addition(int, int);		//function prototype
int main()
{
	int n1, n2;
	printf("Enter the two numbers: ");
	scanf("%d %d", &n1, &n2);
	int add = Addition(n1, n2);		//function call
	printf("Addition -> %d\n", add);
	return 0;
}
int Addition(int a, int b)	//function
{
	return a + b;
}
