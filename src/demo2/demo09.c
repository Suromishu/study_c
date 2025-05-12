//
// Created by Mishu on 2025/5/12.
//

#include <stdio.h>

int* bubble_sort(int* array, int length)
{
    for (int *i = array; i < array + length - 1; i++)
    {
        for (int *j = array; j < array + length - 1 - (i - array); j++)
        {
            if (*j > *(j + 1))
            {
                const int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
    return array;
}

int main()
{
    int array[10];
    const int length = sizeof(array) / sizeof(array[0]);

    int i;
/*
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
*/
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n====================\n");

    bubble_sort(array, length);

    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}