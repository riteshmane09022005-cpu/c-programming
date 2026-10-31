#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;
    
    // Handle negative numbers by converting to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Special case if the input itself is 0
    if(iNo == 0)
    {
        return 0;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        // Skip multiplication by 0 to match assignment test cases
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
        
        iNo = iNo / 10;
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}