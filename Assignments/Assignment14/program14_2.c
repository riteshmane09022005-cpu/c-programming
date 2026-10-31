#include<stdio.h>

void FactRev(int iNo)
{
    // Start from half of the number down to 1
    int iCnt = 0;
    
    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        // Check if iCnt completely divides iNo
        if((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}