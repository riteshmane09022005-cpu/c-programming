#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    // Validate that the range contains positive numbers only
    // Also validate that the starting point is not greater than the ending point
    if (iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0; 
    }

    int iSum = 0;
    int iCnt = 0;

    // Iterate through the range and add even numbers
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point\n");
    scanf("%d", &iValue1);

    printf("Enter ending point\n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    // Only print the addition if the range was valid
    if (iValue1 >= 0 && iValue2 >= 0 && iValue1 <= iValue2)
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}