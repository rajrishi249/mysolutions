#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size)
{
    int i, j, match;

    // Check for one-to-one mapping of items
    for (i = 0; i < size; i++)
    {
        match = 0; // Reset match flag for each item in boxA
        for (j = 0; j < size; j++)
        {
            if (boxA[i] == boxB[j])
            {
                match = 1; // Found a match
                break;
            }
        }

        if (!match)
        {
            return 0; // No match found for an item in boxA
        }
    }

    return 1; // One-to-one mapping exists for all items
}

int main()
{
    int boxA[] = {200, 9, -90};
    int boxB[] = {-90, 200, 10};
    int size = sizeof(boxA) / sizeof(boxA[0]);

    int result = compareBoxes(boxA, boxB, size);

    if (result)
    {
        printf("One-to-one mapping exists between the boxes\n");
    }
    else
    {
        printf("One-to-one mapping does not exist between the boxes\n");
    }

    return 0;
}
