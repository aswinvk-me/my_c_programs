#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch >= '0' && ch <= '9')
		printf("yes digit character\n");
	else
		printf("not a digit character\n");
	return 0;
}

