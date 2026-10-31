#include<stdio.h>

int CountTwo(int iNo)
Digit Counting Logic
{
    int iDigit = 0;
    int iCount = 0;

    // Handle negative numbers by converting to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop until all digits are processed
    while (iNo > 0)
    {
        iDigit = iNo % 10; // Extract the last digit

        if (iDigit == 2)
        {
            iCount++;      // Increment counter if digit is 2
        }

        iNo = iNo / 10;    // Remove the last digit
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;          // Corrected from bRet to iRet to match function usage

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}