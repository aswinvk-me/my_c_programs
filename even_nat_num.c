#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter n value: ");
	scanf("%d", &n);
	printf("All odd naturals: ");
	for(int i = 1; i<= n; i+= 2)
	{
		printf("%d ",i);
	}
	printf("\nAll Even naturals: ");
	for(int i = 2; i<= n; i+= 2)
	{
		printf("%d ",i);
	}
	printf("\n");
	return 0;
}
