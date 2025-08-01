/*
 * Name: Aswin chandra M A
 * Date: 01/08/2025
 * Description: 
 */

#include<stdio.h>
int main()
{
	printf("hello\n");
	goto label;
	int i = 0;
	printf("World");
label:
	for(; i < 10; i++)
	{
		printf("%d ", i);
	}
	printf("down i = %d\n", i);

}
