#include<stdio.h>

void Display(int iNo)
{
    // If the user enters a negative number, convert it to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop from negative iNo to positive iNo
    for(int iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Display(iValue);
    
    return 0;
}