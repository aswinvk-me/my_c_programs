/*
 * Name: Aswin chandra M A
 * Date: 04/08/2025
 * Description: 
 */

#include <stdio.h>
int main()
{
	int size, count = 0;
	printf("Enter the size of the array: ");
	scanf("%d", %size);
	int arr[size], uniq_arr[size];
	printf("Enter the elements of the array: ");
	for(int i = 0; i < size; i ++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < size; i ++)
	{
		int flag = 0; 
		for(int j = 0; j < count; j ++)
		{
			if(uniq_arr[j] == arr[i])
				flag = 1;
			break;

		}
		if(flag == 0)
		{
			uniq_arr[j] = arr[i];
		}
	

