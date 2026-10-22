#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    // Check if the character is an uppercase letter
    if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    // Check if the character is a lowercase letter
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    // Check if the character is a numerical digit
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    // If it doesn't match any of the above, it's a special character
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter a character: ");
    scanf(" %c", &cValue); // Added a space before %c to skip any leading whitespace/newlines
    
    CheckCharacterType(cValue);
    
    return EXIT_SUCCESS;
}