#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

// Function declaration and definition
BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
    
    printf("Please enter number:\n");
    scanf("%d", &iValue);
    
    // Call the function passing user input
    bRet = ChkGreater(iValue);
    
    // Check return value
    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    
    return 0;
}