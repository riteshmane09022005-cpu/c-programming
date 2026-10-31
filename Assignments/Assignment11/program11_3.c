#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    // Validate that the range contains positive numbers only
    if (iStart < 0 || iEnd < 0)
    {
        printf("Invalid range\n");
        return -1; // Returning -1 to indicate an invalid range error
    }

    // Validate that the starting point is less than or equal to the ending point
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return -1;
    }

    int iSum = 0;
    int iCnt = 0;

    // Loop to add all numbers in between the range
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    // Only display the addition result if the range was valid
    if (iRet != -1)
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}