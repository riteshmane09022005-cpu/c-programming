#include<stdio.h>

void MultipleDisplay(int iNo)
{
    // Logic to print the first 5 multiples
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("%d\t", iNo * i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    MultipleDisplay(iValue);
    
    return 0;
}