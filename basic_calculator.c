#include <stdio.h>
int main()
{
	int x1 , x2 ;
	printf("enter two number:");
	scanf("%d %d",&x1,&x2);
	printf("addition =%d\n", x1 + x2 );
	printf("subtraction =%d\n", x1 - x2 );
	printf("multiplication =%d\n", x1 * x2 );
	printf("division =%f\n", (float)x1 / x2 );
	return 0;
}
