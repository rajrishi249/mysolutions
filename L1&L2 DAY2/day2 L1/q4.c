#include <stdio.h>

int countSetBits(unsigned int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    unsigned int a[3] = {0x1, 0xF4, 0x10001};
    int totalSetBits = 0;

    for (int i = 0; i < 3; i++)
    {
        totalSetBits += countSetBits(a[i]);
    }

    printf("Total set bits: %d\n", totalSetBits);

    return 0;
}
