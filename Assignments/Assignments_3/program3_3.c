#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    // Upupdater/Filter to handle negative numbers
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    // Loop through numbers to find factors up to half of iNo
    for(i = 1; i <= iNo / 2; i++)
    {
        // Check if 'i' is a factor of 'iNo' AND if 'i' is an even number
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    // Call the function with the user input
    DisplayEvenFactor(iValue);

    return 0;
}