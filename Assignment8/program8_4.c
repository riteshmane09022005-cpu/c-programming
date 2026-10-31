#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    // Updator to handle negative input values
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print the multiplication table up to 10
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}