#include<stdio.h>

int main()
{
    auto int iAge = 0;

    printf("Enter your Age \n");
    scanf("%d",&iAge);

    if((iAge >= 0)&& (iAge <= 10))
    {
        printf("Your ticket amount iS : 100\n");
    }

    else if((iAge > 10) && (iAge <= 40))
    {
        printf("Your ticket amount is : 500\n");
    }
    else if(iAge > 40)
    {
        printf("Your ticket amount is : 300\n");
    }
    return 0;
}