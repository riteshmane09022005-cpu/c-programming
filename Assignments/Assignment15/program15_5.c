#include<stdio.h>

// Function declaration with two parameters: total marks and obtained marks
float Percentage(int iTotal, int iObtained)
{
    // Handle the condition if total marks is 0 to prevent division by zero
    if(iTotal == 0)
    {
        return 0.0;
    }
    
    // Logic to calculate percentage
    float fPercentage = ((float)iObtained / iTotal) * 100;
    
    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;
    
    printf("Please enter total marks\n");
    scanf("%d", &iValue1);
    
    printf("Please enter obtained marks\n");
    scanf("%d", &iValue2);
    
    // Call the function passing total marks (iValue1) and obtained marks (iValue2)
    fRet = Percentage(iValue1, iValue2);
    
    // Print the calculated percentage output
    printf("Percentage is : %.1f%%\n", fRet);
    
    return 0;
}