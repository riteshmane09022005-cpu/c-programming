#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

// Function to check if two numbers are equal
BOOL ChkEqual(int iNo1, int iNo2)
{
    // Logic to compare the two numbers
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;
    
    printf("Please enter two numbers:\n");
    scanf("%d %d", &iValue1, &iValue2);
    
    // Function call filling the blanks from the template
    bRet = ChkEqual(iValue1, iValue2);
    
    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    
    return 0;
}