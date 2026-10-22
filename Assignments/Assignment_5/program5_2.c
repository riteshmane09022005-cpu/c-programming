#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    // Filter out invalid years (less than or equal to zero)
    if (iYear <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    // Leap year logic based on Gregorian calendar rules
    if ((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("%d is a Leap Year\n", iYear);
    }
    else
    {
        printf("%d is Not a Leap Year\n", iYear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}