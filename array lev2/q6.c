#include <stdio.h>

void decimal_to_binary(int decimal) {
    if (decimal > 0) {
        decimal_to_binary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

void decimal_to_octal(int decimal) {
    if (decimal > 0) {
        decimal_to_octal(decimal / 8);
        printf("%d", decimal % 8);
    }
}

void decimal_to_hexadecimal(int decimal) {
    if (decimal > 0) {
        decimal_to_hexadecimal(decimal / 16);
        int remainder = decimal % 16;
        if (remainder < 10)
            printf("%d", remainder);
        else
            printf("%c", 'A' + remainder - 10);
    }
}

int main() {
    int decimal_numbers[] = {858, 107, 13, 1};
    int size = sizeof(decimal_numbers) / sizeof(decimal_numbers[0]);

    for (int i = 0; i < size; i++) {
        printf("Decimal: %d\n", decimal_numbers[i]);
        printf("Binary: ");
        decimal_to_binary(decimal_numbers[i]);
        printf("\n");
        printf("Octal: ");
        decimal_to_octal(decimal_numbers[i]);
        printf("\n");
        printf("Hexadecimal: ");
        decimal_to_hexadecimal(decimal_numbers[i]);
        printf("\n\n");
    }

    return 0;
}




