#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    // Validate if the range is valid (start should not be greater than end)
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    // Loop from the ending point down to the starting point
    for (int iCnt = iEnd; iCnt >= iStart; iCnt--)
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}