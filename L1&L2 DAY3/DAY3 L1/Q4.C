#include <stdio.h>

void findSmallestAndLargestDigits(int n)
{
    if (n <= 0)
    {
        printf("Not Valid\n");
        return;
    }

    int num, digit;
    int smallestDigit = 9, largestDigit = 0;

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        while (num != 0)
        {
            digit = num % 10;

            if (digit < smallestDigit)
                smallestDigit = digit;

            if (digit > largestDigit)
                largestDigit = digit;

            num /= 10;
        }
    }

    printf("Smallest digit: %d\n", smallestDigit);
    printf("Largest digit: %d\n", largestDigit);
}

int main()
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    findSmallestAndLargestDigits(n);

    return 0;
}
