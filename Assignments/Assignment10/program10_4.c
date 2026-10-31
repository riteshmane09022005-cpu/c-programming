#include<stdio.h>

double FhtoCs(float fTemp)
{
    // Formula: (Fahrenheit - 32) * (5.0 / 9.0)
    double celsius = (fTemp - 32) * (5.0 / 9.0);
    return celsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit: ");
    // Note: The template image contains minor typos like fValue1 and missing format specifiers.
    // To read a float properly, we use %f and pass &fValue.
    scanf("%f", &fValue);
    
    dRet = FhtoCs(fValue);
    
    printf("Temperature in Celsius is: %lf\n", dRet);
    
    return 0;
}