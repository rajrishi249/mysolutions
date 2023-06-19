#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char *timeString) {
    char *token;
    unsigned long totalSeconds = 0;
    unsigned long hours, minutes, seconds;

    char *copy = strdup(timeString); // Create a copy of the input string

    // Split the string using ':' as the delimiter
    token = strtok(copy, ":");
    hours = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    minutes = strtoul(token, NULL, 10);

    token = strtok(NULL, ":");
    seconds = strtoul(token, NULL, 10);

    // Calculate the total seconds
    totalSeconds = hours * 3600 + minutes * 60 + seconds;

    free(copy); // Free the dynamically allocated copy

    return totalSeconds;
}

int main() {
    const char *timeString1 = "10:12:50";
    const char *timeString2 = "13:10:40";

    unsigned long totalSeconds1 = computeTotalSeconds(timeString1);
    unsigned long totalSeconds2 = computeTotalSeconds(timeString2);

    printf("Total seconds for %s: %lu\n", timeString1, totalSeconds1);
    printf("Total seconds for %s: %lu\n", timeString2, totalSeconds2);

    return 0;
}
