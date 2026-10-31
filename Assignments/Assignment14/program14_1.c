#include<stdio.h>

int MultFact(int iNo)
{
    // Handle edge cases where number is 0 or negative
    if (iNo <= 0) {
        return 0;
    }

    int iMult = 1;
    
    // Iterate from 1 up to iNo/2 to find proper factors
    for (int iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);
    
    iRet = MultFact(iValue);
    
    printf("%d\n",iRet);
    
    return 0;
}