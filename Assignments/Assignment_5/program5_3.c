#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    // Validate that marks are within the valid 0-100 range
    if (fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid Marks\n");
    }
    // Check for Grade A
    else if (fMarks >= 90.0f && fMarks <= 100.0f)
    {
        printf("Grade A\n");
    }
    // Check for Grade B
    else if (fMarks >= 75.0f && fMarks <= 89.0f)
    {
        printf("Grade B\n");
    }
    // Check for Grade C
    else if (fMarks >= 60.0f && fMarks <= 74.0f)
    {
        printf("Grade C\n");
    }
    // Check for Grade D
    else if (fMarks >= 40.0f && fMarks <= 59.0f)
    {
        printf("Grade D\n");
    }
    // Marks are between 0 and 39
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}