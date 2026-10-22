#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    // Assume the first number is the greatest initially
    int iGreatest = iFirst;

    // Compare with the second number
    if (iSecond > iGreatest)
    {
        iGreatest = iSecond;
    }

    // Compare with the third number
    if (iThird > iGreatest)
    {
        iGreatest = iThird;
    }

    // Print the output in the required format
    printf("%d is Greatest\n", iGreatest);
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}