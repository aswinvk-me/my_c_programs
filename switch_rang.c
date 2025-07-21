#include<stdio.h>
int main()
{
	int opt;
	printf("Enter option: ");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1 ... 10 :printf("Between 1 and 10\n");
			       break;
		case 11 ... 20 :printf("Between 11 and 20\n");
				break;
		case 21 ... 30 :printf("Between 21 and 30\n");
                                break;
	}
}

