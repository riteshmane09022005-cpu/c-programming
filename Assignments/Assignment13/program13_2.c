#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle negative numbers by making them positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to extract and check each digit
    while(iNo > 0)
    {
        iDigit = iNo % 10;     // Extract the last digit
        
        if(iDigit % 2 != 0)    // Check if the digit is odd
        {
            iCount++;          // Increment count if odd
        }
        
        iNo = iNo / 10;        // Remove the last digit
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d\n",iRet);

    return 0;
}