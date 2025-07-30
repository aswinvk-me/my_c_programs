/*
 * Name: Aswin chandra M A
 * Date: 29/07/2025
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
	printf("Enter the elements of array: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 1; i < size; i++)
	{
		for(int j = 0; j < size - i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Array after sorting: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

