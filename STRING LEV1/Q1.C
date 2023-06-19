#include <stdio.h>

void toggleCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // Convert uppercase to lowercase
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert lowercase to uppercase
        }
        i++;
    }
}

int main() {
    char str[] = "Abcd XYZ";
    printf("Original string: %s\n", str);

    toggleCase(str);

    printf("Toggled case string: %s\n", str);

    return 0;
}
