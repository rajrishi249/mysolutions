#include <stdio.h>

int isVowel(char c) {
    int result;
    
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            result = 1; // Vowel
            break;
        default:
            result = 0; // Not vowel
    }
    
    return result;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    int isCharVowel = isVowel(character);
    
    if (isCharVowel == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    
    return 0;
}
