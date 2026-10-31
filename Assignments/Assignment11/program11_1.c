#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    // Filter to handle invalid range where start is greater than end
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // Loop to display all numbers in the given range inclusive
    for (int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point: ");
    scanf("%d", &iValue1);
    
    printf("Enter ending point: ");
    scanf("%d", &iValue2);
    
    RangeDisplay(iValue1, iValue2);
    
    return 0;
}