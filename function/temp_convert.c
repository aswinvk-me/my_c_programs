/*
 * Name: Aswin chandra M A
 * Date: 05/08/2025
 * Description: 
 */

#include <stdio.h>
float convert(float);
int main()
{
	float fah;
	printf("Enter temperature in fahrenheit: ");
	scanf("%f", &fah);
	printf("Temp is %f Celcius", convert(fah));
	return 0;
}
float convert(float fah)
{
	float cel;
	cel = ((float)5/9)*(fah - 32);
	return cel;
}
