#include <stdio.h>
int main()
{
	char ch;
	do
	{
		printf("Enter the character: ");
		scanf(" %c", &ch);  // a space is given before %c to solve the issue of scaning the enter(\n). from buffer the \n will be ignored.
	}while(ch != 'Y' && ch != 'y');

	printf("Yes allowed\n");
}
//dflk
