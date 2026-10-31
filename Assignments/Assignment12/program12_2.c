#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    // Handle negative numbers by converting them to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Explicitly handle the case where the input itself is 0
    if(iNo == 0)
    {
        return TRUE;
    }

    // Extract each digit and check if it is 0
    while(iNo > 0)
    {
        int iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            return TRUE; // Found a zero digit
        }
        
        iNo = iNo / 10;
    }

    return FALSE; // No zero digit found
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}