#include<stdio.h>

// Function to convert Square Feet to Square Meter
double SquareMeter(int iValue)
{
    // 1 square feet = 0.0929 square meter
    double dAns = 0.0;
    
    dAns = iValue * 0.0929;
    
    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter area in square feet: ");
    // Note: The template image contains a small typo (scanf uses &fValue instead of &iValue). 
    // It is corrected here to match your declared variable.
    scanf("%d", &iValue); 
    
    dRet = SquareMeter(iValue);
    
    // Displaying the output up to 6 decimal places to match the assignment examples
    printf("Result is: %f\n", dRet);
    
    return 0;
}