//
// Created by Mishu on 2025/5/9.
//

#include <stdio.h>

int main()
{
    int arr[] = {7, 2, 6, 4, 5, 8, 3, 1, 9};

    int i, j;
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        for (j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("[");
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d", arr[i]);
        if (i != sizeof(arr) / sizeof(arr[0]) - 1)
        {
            printf(", ");
        }
    }
    printf("]");

    return 0;
}