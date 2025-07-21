#include<stdio.h>
int main()
{
	int num1,num2,cho;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	printf("Select an operation\n| 1-> Addition      |\n| 2-> subtraction   |\n| 3-> Multiplication|\n| 4-> Division      |\n");
	scanf("%d",&cho);
	switch (cho)
	{
		case 1: printf("Additoin: %d\n",num1+num2);
			break;
		case 2: printf("Subtraction: %d\n",num1-num2);
			break;
		case 3: printf("Multiplication: %d\n",num1*num2);
			break;
		case 4: printf("Division: %f\n",(float)num1/num2);
			break;
		default: printf("invalid choice\n");
	}


}	
