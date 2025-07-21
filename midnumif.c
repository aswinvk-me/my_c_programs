
/* Name:Aswin chandra M A
 * Date:16/07/25
 * Description:Middle number using if else
 * Sample I/P: 1 2 3 
 * Sample O/P: 2 is middle
 * */

#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d", &n1, &n2, &n3);
	if(n1<n2)
	{
		if( n3 < n1 ) 
			printf("%d is middle\n",n1);
		else if( n2 < n3 )
			printf("%d is middle\n",n2);
		else
			printf("%d is middle\n",n3);
	}
	else 
	{
		if( n3 > n1 )
			printf("%d is middle\n",n1);
		else if( n2 > n3 )
			printf("%d is middle\n",n2);
		else
			printf("%d is middle\n",n3);
	}
	
}









