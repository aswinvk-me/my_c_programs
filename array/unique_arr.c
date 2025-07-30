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
	int size, flag = 0;
	printf("Eneter the size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the elements of array: ");
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(arr[i] == arr[j])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			break;
	}
	if(flag == 1)
		printf("The array is not unique.\n");
	else
		printf("The array is unique.\n");
}
