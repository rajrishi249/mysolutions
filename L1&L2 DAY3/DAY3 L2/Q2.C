#include <stdio.h>

#define DEC_TO_BCD(dec) (((dec / 10) << 4) | (dec % 10))

int main()
{
    int decimal = 28;
    unsigned char bcd = DEC_TO_BCD(decimal);

    printf("Decimal: %d\nBCD: 0x%X\n", decimal, bcd);

    return 0;
}
