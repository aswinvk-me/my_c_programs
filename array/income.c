/*
 * Name: Aswin chandra M A
 * Date: 28/07/2025
 * Description: 
 * Sample Input: 
 * Sample Output: 
 */

#include <stdio.h>
int main()
{
	int arr[12], option, i;
	printf("Enter the 12 month income: ");
	for(int i = 0; i < 12; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Select:\n 1-> Highest income with month\n 2-> Lowest income with month\n");
	printf("3-> Average income of entire year\n 4-> Compare each month with avg income\n");
	scanf("%d", &option);
	if(option <= 4 && option >= 1)
	{
	int average = 0;
	for(i = 0; i < 12; i++)
		 {
			average = arr[i] + average;
		 }
	switch(option)
	{
	case 1 : int high = arr[0];
		 for(i = 1; i < 12; i++)
		 {
			 if(high < arr[i])
				 high = arr[i];
		 }
		 printf("%d is the highest income in month %d", arr[i], i);
		 break;
	case 2 : int low = arr[0];
		 for(i = 1; i < 12; i++)
		 {
			 if(low > arr[i])
				 low = arr[i];
		 }
		 printf("%d is the lowest income in month %d", arr[i], i+1);
		 break;

	case 3 : printf("Average income is %d", average/12);
		 break;
	case 4 :
		 printf("Average is %d", average/12);
		 for(i = 0; i < 12; i++)
		 {
			printf("month %d -> %d\n",i + 1, arr[i] - average/12);
		 }
		 break;
	}
	}
}
