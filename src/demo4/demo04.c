//
// Created by Mishu on 2025/5/15.
//

#include <stdio.h>

void shell_sort(int *array, const int length)
{
    for (int gap = length / 2; gap > 0; gap /= 2)
    {
        for (int i = 0; i < gap; i++)
        {
            for (int j = i + gap; j < length; j += gap)
            {
                const int temp = *(array + j);
                int k = j;
                while (*(array + k - gap) > temp  && k >= gap)
                {
                    *(array + k) = *(array + k - gap);
                    k -= gap;
                }
                *(array + k) = temp;
            }
        }
    }
}

int main()
{
    int array[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &array[i]);

    shell_sort(array, 10);

    for (int i = 0; i < 10; i++)
        printf("%d ", array[i]);

    return 0;
}