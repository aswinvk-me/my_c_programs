/*
 * Name: Aswin chandra M A
 * Date: 25/07/2025
 * Description: search one element in array available or not. 
 * Sample Input: 
 * Sample Output: 
 */

#include <stdio.h>
int main()
{
	int size, num,flag = 0;
	printf("Enter the size of array : ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter the elements: ");
	for(int i=0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter a number to search: ");
	scanf("%d", &num);
	for(int i = 0; i < size; i++)
	{
		if( num == arr[i])
			flag =1;
	}
	if(flag == 1)
		printf("Available\n;");
	else
		printf("Not available\n");

}


//without flag we can do like this
//
//if(num == arr[i])
//{
//	printf("available");
//	break;
//}
//if(i == size)
//	printf("Element not found");
//
//
//we have to declare the i outside for loop	
