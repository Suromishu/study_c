//
// Created by Mishu on 2025/5/16.
//

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);
int max_count_num(const int *array, int length);

int main()
{
    int array[] = {2, 6, 8, 6, 5, 1, 3, 6, 2, 5, 4, 1, 6, 2, 5, 6, 1, 8, 9, 7};
    const int len = sizeof(array) / sizeof(array[0]);

    qsort(array, len, sizeof(int), compare);

    printf("%d", max_count_num(array, len));
}

int compare(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int max_count_num(const int *array, const int length)
{
    int max_count = 0;
    int count_num = array[0];
    for (int i = 0; i < length;)
    {
        const int current = array[i];
        int count = 0;
        while (i < length && array[i] == current)
        {
            count++;
            i++;
        }
        if (count > max_count)
        {
            max_count = count;
            count_num = current;
        }
    }
    return count_num;
}