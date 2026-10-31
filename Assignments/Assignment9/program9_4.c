#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;

    // Handle negative input by converting it to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Multiply only the odd numbers from iNo down to 1
    for (int i = iNo; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}