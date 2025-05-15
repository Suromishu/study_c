//
// Created by Mishu on 2025/5/15.
//

#include <stdio.h>

void selection_sort(int *arr, const int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        const int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main()
{
    int arr[] = {3, 8, 1, 4, 7, 6, 10, 2, 9, 5};
    const int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}