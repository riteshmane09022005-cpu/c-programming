#include<stdio.h>

void NonFact(int iNo)
{
    // Handle edge case for negative numbers or zero
    if(iNo <= 0)
    {
        return;
    }

    // Loop from 1 to iNo to find non-factors
    for(int i = 1; i <= iNo; i++)
    {
        // If iNo is not completely divisible by i, it's a non-factor
        if(iNo % i != 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}