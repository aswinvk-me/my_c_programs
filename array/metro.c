/*
 * Name: Aswin chandra M A
 * Date: 28/07/2025
 * Description: judge the metro fare
 * Sample Input: 
 * Sample Output: 
 */

#include <stdio.h>
int main()
{
	int origin, destination;
	printf("stations between 1 and 20\n");
	printf("Enter your oringin station: ");
	scanf("%d", &origin);
	if(origin <= 20 && origin >= 1)
	{
		printf("Enter your destination station: ");
		scanf("%d", &destination);
		if(destination <= 20 && destination >= 1)
		{
			int journey = origin - destination;
			if(journey < 0)
			{
				journey = -journey;
			}
				if(journey == 0)
				{
					printf("Invalid journey");
				}
				else if(journey == 1)
				{
					printf("Fair: 5 rupees");
				}
				else if(journey <= 3)
				{
					printf("Fair: %d rupees", 5 + journey * 4);
				}
				else if(journey <= 14)
				{
					printf("Fair: %g rupees", (float)5 + journey * 3.5);
				}
				else
				{
					printf("Fair: %d rupees", 5 + journey * 3);
				}
		}
		else
			printf("Invalid journey\n");
	}
	else
		printf("Invalid journey\n");
}
	


