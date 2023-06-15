#include <stdio.h>

char *xstrchr(char *string, char ch)
{
    while (*string != '\0')
    {
        if (*string == ch)
        {
            return string; // Found the character, return its address
        }
        string++; // Move to the next character in the string
    }
    
    return NULL; // Character not found, return NULL
}

int main()
{
    char *string = "Hello, world!";
    char ch = 'o';
    
    char *result = xstrchr(string, ch);
    
    if (result != NULL)
    {
        printf("Character '%c' found at address %p\n", ch, result);
    }
    else
    {
        printf("Character '%c' not found\n", ch);
    }
    
    return 0;
}
