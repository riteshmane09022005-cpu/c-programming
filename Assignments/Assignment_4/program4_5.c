#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
   
    if (iValue % 5 == 0)
    {
        printf("%d is divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n", iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}