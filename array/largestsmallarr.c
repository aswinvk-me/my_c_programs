/*
 * Name: Aswin chandra M A
 * Date: 25/07/2025
 * Description: 
 * Sample Input: 
 * Sample Output: 
 */


#include <stdio.h>
int main()
{
	int size, i;
	printf("Enter the size of array : ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter the elements: ");
	for(int i=0; i < size; i++)
		scanf("%d", &arr[i]);
	int large = arr[0];
	for(i = 1; i < size; i++)
	{
		if( large < arr[i])
			large = arr[i];
	
	}
	printf("%d is largest in array\n", large);

}
