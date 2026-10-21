#include <stdio.h>

void PrintEven(int iNo)
{
    // Filter to handle invalid or zero/negative input
    if(iNo <= 0)
    {
        return;
    }
    
    // Logic to print iNo number of even numbers
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    PrintEven(iValue);
    
    return 0;
}