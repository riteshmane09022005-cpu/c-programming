#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    
    // Handle negative numbers by converting to positive (as seen in the example: -5 -> 8)
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Loop through all even numbers from iNo down to 2
    for(int i = iNo; i > 1; i--)
    {
        if(i % 2 == 0)
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
    
    iRet = EvenFactorial(iValue);
    
    printf("Even Factorial of number is %d\n", iRet);
    
    return 0;
}