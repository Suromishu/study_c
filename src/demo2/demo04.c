//
// Created by Mishu on 2025/5/10.
//

#include <stdio.h>

//交换数组中的两个元素
void swap(int *a, int index1, int index2)
{
    int temp = a[index1];
    a[index1] = a[index2];
    a[index2] = temp;
}

void swap2(int *a, int index1, int index2)
{
    int temp = *(a + index1);
    *(a + index1) = *(a + index2);
    *(a + index2) = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *arr2 = arr;

    swap(arr, 1, 7);
    swap(arr2, 5, 6);

    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

