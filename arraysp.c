/*
 * Name: Aswin chandra M A
 * Date: 25/07/2025
 * Description: array scan and print 
 * Sample Input: 
 * Sample Output: 
 */
#include <stdio.h>
int main()
{
	int size;
	printf("Enter the size of array : ");
	scanf("%d", &size);

	int arr[size];
	printf("Enter the elements: ");
	for(int i=0; i<size; i++)
		scanf("%d", &arr[i]);
	printf("your given array is: ");
	for(int i=0; i<size; i++)
		printf("%d ",arr[i]);
	printf("\n");
}
	
