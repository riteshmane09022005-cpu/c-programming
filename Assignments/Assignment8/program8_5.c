#include<stdio.h>

void TableRev(int iNo)
{
    // Convert negative numbers to positive to match the sample output format
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop from 10 down to 1 to print the multiplication table in reverse order
    for (int iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}