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
	int size, average = 0;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the elements of array: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < size; i++)
	{
		average = average + arr[i];
	}
	printf("average = %d", average/size);
}
			
