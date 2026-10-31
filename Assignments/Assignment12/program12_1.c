#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    // Handle negative numbers by converting them to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop through each digit until the number becomes 0
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}