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
	int size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the elements: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	int small = arr[0];
	for(int i = 1; i < size; i++)
	{
		if(small > arr[i])
		small = arr[i];
	}
	printf("%d",small);
}



