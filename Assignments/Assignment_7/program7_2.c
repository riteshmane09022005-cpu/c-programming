#include<stdio.h>

void Display(int iNo)
{
    // Logic to print numbers from 1 to iNo
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d\t", i);
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