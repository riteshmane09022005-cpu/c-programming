#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    // 1. Check if all sides are positive
    // 2. Check if the sum of any two sides is greater than the third side
    if ((iSide1 > 0 && iSide2 > 0 && iSide3 > 0) &&
        (iSide1 + iSide2 > iSide3) &&
        (iSide2 + iSide3 > iSide1) &&
        (iSide3 + iSide1 > iSide2))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;
    
    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);
    
    CheckTriangle(iSide1, iSide2, iSide3);
    
    return EXIT_SUCCESS;
}