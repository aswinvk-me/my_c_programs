//Using nested if
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a year:\n");
	scanf("%d",&num);
	if(num%100==0)
	{
		if(num%400==0)
			printf("Its a leap year\n");
		else
			printf("Not a leap year\n");
	}
	else 
	{
		if(num%4==0)
			printf("Its a leap year\n");
		else
			printf("Not a leap year\n");
	}
	return 0;
}
/*Using if else only
 * if ((num%4==0)&&(num%100!=0)||(num%400==0))
 * 	printf("leap year");
 * else
 * 	printf("not leap year");
 * return 0; */
//--------------------------------------------
/*Using if else if
 * if(num%400)
 * pf(leap);
 * else if(num%100)
 * pf(not leap);
 * else if(num%4==0)
 * pf(leap);
 * else
 * pf(not leap); */


