#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int size = sizeof(arr) / sizeof(arr[0]);

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    int evenDiff = evenSum - oddSum;
    int oddDiff = oddSum - evenSum;

    printf("Difference between sum of even-indexed elements: %d\n", evenDiff);
    printf("Difference between sum of odd-indexed elements: %d\n", oddDiff);

    return 0;
}
