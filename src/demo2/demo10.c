//
// Created by Mishu on 2025/5/12.
//

#include <stdio.h>

int get_max(int *arr, int length)
{
    int max = *arr;
    for (int i = 1; i < length; i++)
    {
        max = max > *(arr + i) ? max : *(arr + i);
    }
    return max;
}

int main()
{
    int arr[] = {23, 34, 35, 36, 45, 45, 46, 78};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("数组中的最大值为：%d\n", get_max(arr, len));

    return 0;
}