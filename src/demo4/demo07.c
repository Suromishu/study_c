//
// Created by Mishu on 2025/5/16.
//

#include <stdio.h>

void swap(int *a, int *b);
void sort(int *arr, int length);
void max_count_num(const int *arr, int length, int *return_num);

int main()
{
    int arr[] = {2, 6, 8, 6, 5, 1, 3, 6, 2, 5, 4, 1, 6, 2, 5, 6, 1, 8, 9, 7};
    const int len = sizeof(arr) / sizeof(arr[0]);

    sort(arr, len);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    int tar[2];
    max_count_num(arr, len, tar);

    printf("\n出现次数最多的数字是 ： %d， 出现了 %d 次\n", tar[0], tar[1]);

    return 0;
}

void swap(int* a, int* b)
{
    const int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int* arr, const int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int min = i;
        for (int j = min; j < length; j++)
        {
            if (arr[min] > arr[j + 1])
                min = j + 1;
        }
        swap(&arr[min], &arr[i]);
    }
}

void max_count_num(const int *arr, const int length, int *return_num)
{
    int max_count = -1;
    int count_num = -1;
    for (int i = 0; i < length;)
    {
        int start = i;
        int count = 1;
        while (arr[start] == arr[start + 1])
        {
            start++;
            count++;
        }
        if (max_count < count)
        {
            max_count = count;
            count_num = arr[start];
        }
        i = start + 1;
    }
    return_num[0] = count_num;
    return_num[1] = max_count;
}