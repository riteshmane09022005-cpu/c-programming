#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    // Filter out invalid range where starting point is greater than ending point
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // Traverse the range from starting point to ending point
    for (int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        // Check if the current number is even
        if (iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}