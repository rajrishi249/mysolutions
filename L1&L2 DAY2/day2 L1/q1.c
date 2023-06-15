#include <stdio.h>
#include <stdint.h>

void printExponent(double num) {
    uint64_t* ptr = (uint64_t*)&num;  // Type punning to interpret the double as an integer
    uint64_t exponent = (*ptr >> 52) & 0x7FF;  // Extracting the exponent bits

    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");
    for (int i = 11; i >= 0; i--) {
        printf("%llu", (exponent >> i) & 0x1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    
    return 0;
}

