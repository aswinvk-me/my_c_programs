#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter 3 distinct numbers");
	scanf("%d%d%d",&n1,&n2,&n3);
	if((n1>n2 && n2>n3) || (n1<n2 && n2<n3))
		printf("%d is mid",n2);
	else if((n2>n1 && n1>n3) || (n2<n1 && n1<n3))
		printf("%d is mid",n1);
	else
		printf("%d is mid",n3);
	return 0;
}
