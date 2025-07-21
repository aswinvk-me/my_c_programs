#include <stdio.h>
int main()
{
	int x, y, i, p = 1, flag = 0;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &x, &y);
	if(y<0)    // to check if y is negative
	{
		y = -y;
		flag = 1;  // to check if y is changed to negative or not in *2
	}
	for(int i = 1; i <= y; i++)
	{
		p = p*x;
	}
	if(flag == 0)  // *2
		printf("%d ^ %d = %d\n", x, y, p);
	else
		printf("%d ^ %d = %f\n", x, y, (float)1/p);
	return 0;
}

