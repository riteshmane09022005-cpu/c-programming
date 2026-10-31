#include<stdio.h>

// Function to convert kilometers to meters
int KMtoMeter(int iNo)
{
    int iAns = 0;
    
    // 1 Kilometre = 1000 Meters
    iAns = iNo * 1000;
    
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter distance: ");
    scanf("%d", &iValue); // Fixed typo from image (iValue1 -> iValue)
    
    iRet = KMtoMeter(iValue);
    
    printf("Distance in meters is: %d\n", iRet);
    
    return 0;
}