#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "5278";
    char *endptr;
    long num = strtol(str, &endptr, 10);

    if (*endptr == '\0') {
        printf("Converted integer: %ld\n", num);
    } else {
        printf("Conversion error: Invalid input\n");
    }

    return 0;
}
