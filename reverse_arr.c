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
	int size, temp;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the elements: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("The array is: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for(int i = 0; i < size/2 ; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
	printf("Reverse array is: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

				
