#include<stdio.h>

void Number(int iNo)
{
    // Logic to check the range of the number
    if (iNo < 50)
    {
        printf("small\n");
    }
    else if (iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%%d", &iValue);

    Number(iValue);

    return 0;
}