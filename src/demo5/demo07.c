//
// Created by Mishu on 2025/5/21.
//

#include <stdlib.h>

int compare(const void* a, const void* b);
int target_num(const int *array, const int length);

int find_number(int* array, const int length) {
    const int len = length;

    qsort(array, len, sizeof(int), compare);

    return target_num(array, len);
}

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int target_num(const int *array, const int length)
{
    int max_count = 0;
    int max_count_num = 0;
    for (int i = 0; i < length;)
    {
        int count = 1;
        while (i < length)
        {
            if (array[i] != array[i + 1])
                break;
            i++;
            count++;
        }
        if (count > max_count)
        {
            max_count = count;
            max_count_num = array[i];
            if (max_count > length / 2)
                goto re_num;
        }
        i++;
    }

    re_num:
    return max_count_num;
}