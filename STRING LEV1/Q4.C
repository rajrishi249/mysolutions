#include <stdio.h>
#include <time.h>

int countDays(int day1, int month1, int year1, int day2, int month2, int year2) {
    struct tm start = {0};
    struct tm end = {0};
    time_t startTime, endTime;
    double seconds;

    start.tm_year = year1 - 1900;
    start.tm_mon = month1 - 1;
    start.tm_mday = day1;

    end.tm_year = year2 - 1900;
    end.tm_mon = month2 - 1;
    end.tm_mday = day2;

    startTime = mktime(&start);
    endTime = mktime(&end);

    seconds = difftime(endTime, startTime);

    int days = seconds / (24 * 3600);

    return days;
}

int main() {
    int day1 = 10, month1 = 4, year1 = 2015;
    int day2 = 10, month2 = 4, year2 = 2016;

    int days = countDays(day1, month1, year1, day2, month2, year2);

    printf("Number of days: %d\n", days);

    return 0;
}
