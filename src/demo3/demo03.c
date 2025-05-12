//
// Created by Mishu on 2025/5/12.
//

#include <stdio.h>

void set_arr(int **arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = i * col + j;
        }
    }
}

int main()
{
    int a[5] = { 1,2,3,4,5 };
    int b[5] = { 2,3,4,5,6 };
    int c[5] = { 3,4,5,6,7 };
    int *arr[3] = {a, b, c};

    set_arr(arr, 3, 5);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}