#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    // Check if the number is divisible by both 3 and 5 first
    if ((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by Both\n");
    }
    // Check if it is divisible only by 3
    else if (iValue % 3 == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    // Check if it is divisible only by 5
    else if (iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    // If it is divisible by neither
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}