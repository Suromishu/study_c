//
// Created by Mishu on 2025/5/21.
//

#include <stdio.h>

void quick_sort(int *arr, int left, int right);
int partition(int *arr, int left, int right);

int main()
{
    int arr[] = {16, 1, 5, 3, 17, 5, 1, 13, 1, 11, 4, 13, 4, 8, 10, 2, 8, 7, 17, 20, 11, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void quick_sort(int *arr, int left, int right)
{
    if (left >= right)
        return;
    int pivot = partition(arr, left, right);
    quick_sort(arr, left, pivot - 1);
    quick_sort(arr, pivot + 1, right);
}

int partition(int *arr, int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;

    return i + 1;
}