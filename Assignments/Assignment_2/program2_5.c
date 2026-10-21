#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    // Logic to check even or odd
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    bRet = ChkEven(iValue);
    
    // Display result
    if(bRet == TRUE)
    {
        printf("%d is an Even number.\n", iValue);
    }
    else
    {
        printf("%d is an Odd number.\n", iValue);
    }
    
    return 0;
}