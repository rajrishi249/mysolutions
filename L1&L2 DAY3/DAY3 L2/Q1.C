#include <stdio.h>

unsigned char setBit(unsigned char num, int pos)
{
    return num | (1 << pos);
}

unsigned char clearBit(unsigned char num, int pos)
{
    return num & ~(1 << pos);
}

unsigned char toggleBit(unsigned char num, int pos)
{
    return num ^ (1 << pos);
}

int main()
{
    unsigned char num = 0x37;

    num = setBit(num, 3);
    printf("After setting bit 3: 0x%X\n", num);

    num = clearBit(num, 4);
    printf("After clearing bit 4: 0x%X\n", num);

    num = toggleBit(num, 5);
    printf("After toggling bit 5: 0x%X\n", num);

    return 0;
}

