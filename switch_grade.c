#include<stdio.h>
int main()
{
	int mark;
	printf("Enter your grade: ");
	scanf("%d",&mark);
	switch(mark)
	{
	case 0 ... 50 : printf("Grade F\n");
			break;
	case 91 ... 100 : printf("Grade A\n");
			break;
	case 81 ... 90 : printf("Grade B\n");
			break;
	case 71 ... 80 : printf("Grade C\n");
			break;
	case 61 ... 70 : printf("Grade D\n");
			break;
	case 51 ... 60 : printf("Grade E\n");
			break;
		default:printf("Invalid Grade\n");
	}
}
