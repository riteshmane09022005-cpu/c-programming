#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSum = 0;
    
    // Loop from 1 to the given number
    for(int i = 1; i <= iNo; i++)
    {
        // If i is not a factor of iNo
        if(iNo % i != 0)
        {
            iSum = iSum + i;
        }
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    iRet = SumNonFact(iValue);
    
    printf("%d\n", iRet);
    
    return 0;
}