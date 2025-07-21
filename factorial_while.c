#include <stdio.h>
int main()
{
	int num, fact;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num<0)
	{	
		printf("Number is less than 0\n");
		return 0;
	}
	while(num)
	{
		fact*=num;
		num--;
	}
	printf("%d", fact);
}
