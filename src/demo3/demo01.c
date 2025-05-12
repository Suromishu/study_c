//
// Created by Mishu on 2025/5/12.
//

#include <stdio.h>

void set_arr(int *arr, const int size)
{
    for (int i = 0; i < size; i++)
        *(arr + i) = i + 1;
}

void print_arr(const int *arr, const int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
}

int main()
{
    int arr[10] = { 0 };
    const int sz = sizeof(arr) / sizeof(arr[0]);

    set_arr(arr, sz);
    print_arr(arr, sz);
    return 0;
}