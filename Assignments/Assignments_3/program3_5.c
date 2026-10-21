#include <stdio.h>

// 1. Define custom boolean type and values
typedef int BOOL; 
# define TRUE 1
# define FALSE 0

// 2. Function definition to check for vowels
BOOL ChkVowel ( char cVal )
{
    // Check for both lowercase and uppercase vowels
    if( cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u' ||
        cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter character\n");
    scanf("%c",&cValue);
    
    // 3. Call the function
    bRet = ChkVowel (cValue );
    
    // 4. Compare the result to TRUE
    if (bRet == TRUE )
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    
    return 0;
}