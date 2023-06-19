#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {30, 40, 10, 60, 50, 20, 70, 90, 80, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 60;
    int index = linearSearch(arr, size, key);

    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
