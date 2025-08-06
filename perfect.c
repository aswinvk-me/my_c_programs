/*
Name: Aswin chandra M A
Date: 22/07/25
Description: to check if number is perfect or not
Sample i/p: 6
Sample o/p: Yes, entered number is perfect number
*/

#include <stdio.h>
int main()
{
    int num, sum = 0, mod;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        for(int i = 1; i <= num/2; i++)
        {
            mod = num % i;
            if(mod == 0)
            {
                sum += i;
            }
        
        }
        if(sum == num)
        {
            printf("Yes, entered number is perfect number\n");
        }
        else
        printf("No, entered number is not a perfect number\n");
    }
    else
    printf("Error : Invalid Input, Enter only positive number\n");
}
