#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle negative numbers by converting them to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to extract digits one by one
    while(iNo > 0)
    {
        iDigit = iNo % 10; // Extract the last digit
        if(iDigit == 4)
        {
            iCount++;      // Increment count if the digit is 4
        }
        iNo = iNo / 10;    // Remove the last digit
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d\n",iRet);

    return 0;
}