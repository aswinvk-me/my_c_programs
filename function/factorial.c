/*
 * Name: Aswin chandra M A
 * Date: 04/08/2025
 * Description:factorial using function 
 */

#include <stdio.h>
int Factorial(int);
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	if(num < 0)
	{
		printf("Invalid input!");
		return 0;
	}
	printf("factorial -> %d\n", Factorial(num));
	prinf("factorial 2 -> %d\n", Factorial(2)); 		

	return 0;
}
int Factorial(int num)
{
	int fact = 1;
	while(num)
		
		if(num > 0)
		{
			fact *= num;
			num --;
		}
	return fact;
}


