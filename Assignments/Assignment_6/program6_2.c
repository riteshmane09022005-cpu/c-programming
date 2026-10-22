#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    // Write your logic here
    // Step 1: Check for invalid inputs
    if (iAge < 0 || fMarks < 0.0f || fMarks > 100.0f) 
    {
        printf("Invalid input\n");
    }
    // Step 2: Check for eligibility criteria
    else if (fMarks >= 60.0f && iAge >= 17) 
    {
        printf("Eligible for Admission\n");
    }
    // Step 3: If valid but doesn't meet the criteria
    else 
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &&iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}