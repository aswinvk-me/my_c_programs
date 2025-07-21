#include<stdio.h>
int main()
{
	int i, n, f=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		f=f*2;
	        printf("%d ", f );
	}
	

	return 0;
}
//  2*2 2*2*2 2*2*2*2
