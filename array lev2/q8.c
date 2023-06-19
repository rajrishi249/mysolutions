#include <stdio.h>

int getDaysOfMonth(int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysInMonth[month - 1];
}

int main() {
    int day = 10;
    int month = 4;
    int year = 2015;

    int daysElapsed = 0;

    // Calculate the days elapsed
    for (int i = 1; i < month; i++) {
        daysElapsed += getDaysOfMonth(i);
    }
    daysElapsed += day;

    printf("Number of days elapsed: %d\n", daysElapsed);

    return 0;
}
