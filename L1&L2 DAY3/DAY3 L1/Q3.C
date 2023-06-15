#include <stdio.h>

int findLargestNumber(int num)
{
    int largest = 0;

    // Convert the number to a string for easier manipulation
    char str[5];
    sprintf(str, "%d", num);

    for (int i = 0; i < 4; i++)
    {
        // Remove the i-th digit from the number
        int newNum = 0;
        for (int j = 0; j < 4; j++)
        {
            if (j != i)
                newNum = newNum * 10 + (str[j] - '0');
        }

        // Update the largest number if necessary
        if (newNum > largest)
            largest = newNum;
    }

    return largest;
}

int main()
{
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNum = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNum);

    return 0;
}
