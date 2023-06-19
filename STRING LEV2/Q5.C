#include <stdio.h>
#include <string.h>

void rotateString(char* str, int positions) {
    int length = strlen(str);
    int i;

    
    positions = positions % length;

    
    for (i = 0; i < positions; i++) {
        char temp = str[length - 1];
        memmove(str + 1, str, length - 1);
        str[0] = temp;
    }
}

int main() {
    char str[] = "abcdxyz";
    int positions = 4;

    printf("Original string: %s\n", str);

    rotateString(str, positions);

    printf("Rotated string: %s\n", str);

    return 0;
}
