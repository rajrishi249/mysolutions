#include <stdio.h>
#include <string.h>

void sortNames(char *names[], int size)
{
    int i, j;
    char *temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                // Swap names[i] and names[j]
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main()
{
    char *names[] = {
        "rishi", "rahul", "ankit", "rani", "anita", "jyoti", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);

    printf("Names before sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", names[i]);
    }

    sortNames(names, size);

    printf("\nNames after sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
