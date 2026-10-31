#include<stdio.h>

void Display(int iNo)
{
    // Convert negative numbers to positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print N asterisks
    for(int i = 1; i <= iNo; i++)
    {
        printf("* ");
    }

    // Print N hashes
    for(int i = 1; i <= iNo; i++)
    {
        printf("# ");
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}