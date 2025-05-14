//
// Created by Mishu on 2025/5/14.
//

#include <stdio.h>

void set_string(char strings[][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            char c;
            scanf(" %c\n", &c);
            strings[i][j] = c;
        }
    }
}

int main()
{
    char str[5][10];
    set_string(str, 5, 10);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", str[i][j]);
        }
        printf("\n");
    }

    return 0;
}