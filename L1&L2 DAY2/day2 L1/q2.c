#include <stdio.h>

// Function to swap two values of any type
void swap(void* a, void* b, size_t size) {
    char* ptr_a = (char*)a;
    char* ptr_b = (char*)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = *(ptr_a + i);
        *(ptr_a + i) = *(ptr_b + i);
        *(ptr_b + i) = temp;
    }
}

int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap integers
    swap(&a, &b, sizeof(int));

    printf("After swapping: a = %d, b = %d\n", a, b);

    double x = 2.5, y = 7.8;
    printf("Before swapping: x = %lf, y = %lf\n", x, y);

    // Swap doubles
    swap(&x, &y, sizeof(double));

    printf("After swapping: x = %lf, y = %lf\n", x, y);

    return 0;
}
