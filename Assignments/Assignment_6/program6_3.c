#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    // Validate if the purchase amount is negative
    if (fAmount < 0)
    {
        printf("Invalid Amount\n");
        return;
    }

    // Determine the discount rate based on the rules
    if (fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = 10.0f;
    }
    else // fAmount >= 5000
    {
        fDiscount = 20.0f;
    }

    // Calculate the final payable amount
    fFinalAmount = fAmount - (fAmount * (fDiscount / 100.0f));

    // Print the final result formatted to two decimal places
    printf("Payable Amount = %.2f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    if (scanf("%f", &fAmount) != 1) {
        printf("Invalid input.\n");
        return EXIT_FAILURE;
    }

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}