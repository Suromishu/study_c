//
// Created by Mishu on 2025/5/20.
//

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int arr[] = {5, 11, 6, 12, 18, 75, 62, 48, 52, 34, 1, 54, 15, 28};

    qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), compare);

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d ", arr[i]);

    return 0;
}