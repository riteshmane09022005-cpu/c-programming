#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    // Validation
    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    // Bonus Logic
    if (iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if (iYears >= 5 && iYears <= 10)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}