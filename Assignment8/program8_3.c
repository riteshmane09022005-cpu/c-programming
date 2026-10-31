#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;

    // Convert negative numbers to positive as per the example (-5 -> 120)
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Logic to calculate factorial
    while (iNo > 1)
    {
        iFact = iFact * iNo;
        iNo--;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}