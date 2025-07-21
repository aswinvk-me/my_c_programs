#include <stdio.h>
int main()
{
    int status;
    printf("1 -> Passed, 0 -> Failed\n");
    printf("Enter paper 1 status(1/0):\n");
    scanf("%d",&status);
    if(status !=0 && status !=1)
    {
        printf("invalid entry\n");
        return 0;
    }
    if(status)
    {
        printf("You qualified paper1\n");
        printf("Enter paper 2 status(1/0):\n");
        scanf("%d",&status);
        if(status)
            printf("Congrats, You qualified both paper1 and paper2\n");
        else 
            printf("You qulified paper1 , but disqualified paper2\n");

    }
    else
        printf("you Disqualified Paper1!!\n");
        return 0;
}

