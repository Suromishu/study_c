//
// Created by Mishu on 2025/5/11.
//

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i = *arr;
    printf("%d\n", i);
    printf("%d\n", arr[0]);

    printf("%d\n", *(arr + 1));

    int *a = arr + 3;
    printf("%d\n", *a);
    return 0;
}