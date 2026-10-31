#include<stdio.h>

void Pattern(int iNo)
{
    // Convert negative numbers to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print '$' and '*' alternatingly iNo times
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ \t * \t ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Pattern(iValue);
    
    return 0;
}