#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dAns = 0.0;
    
    // Calculate the area using the formula (Width * Height)
    dAns = (double)fWidth * (double)fHeight;
    
    return dAns;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    
    printf("Enter width : ");
    scanf("%f", &fValue1);
    
    printf("Enter height : ");
    scanf("%f", &fValue2);
    
    dRet = RectArea(fValue1, fValue2);
    
    // Display the calculated area
    printf("Area is : %f\n", dRet);
    
    return 0;
}