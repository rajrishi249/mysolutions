#include <stdio.h>
#include <limits.h>

int findSecondMinimum(int arr[], int n) {
    if (n < 2) {
        return -1;
    }

    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    if (min2 == INT_MAX) {
        return -1;
    }

    return min2;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int second_min = findSecondMinimum(arr, n);
    if (second_min != -1) {
        printf("Second Minimum: %d\n", second_min);
    } else {
        printf("No second minimum element found.\n");
    }

    return 0;
}
