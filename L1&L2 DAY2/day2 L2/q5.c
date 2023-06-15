#include <stdio.h>

void encode(char *string)
{
    while (*string != '\0')
    {
        *string += 5; // Add 5 to each character
        string++; // Move to the next character
    }
}

void decode(char *string)
{
    while (*string != '\0')
    {
        *string -= 5; // Subtract 5 from each character
        string++; // Move to the next character
    }
}

int main()
{
    char string[100];
    
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    
    // Encode the string
    encode(string);
    printf("Encoded string: %s", string);
    
    // Decode the string
    decode(string);
    printf("Decoded string: %s", string);
    
    return 0;
}
