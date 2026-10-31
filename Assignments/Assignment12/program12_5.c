#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Handle negative numbers by converting to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to extract and check each digit
    while(iNo > 0)
    {
        iDigit = iNo % 10; // Extract the last digit
        
        if(iDigit < 6)
        {
            iCount++;      // Increment count if digit is less than 6
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

    iRet = Count(iValue);

    printf("%d\n",iRet);

    return 0;
}