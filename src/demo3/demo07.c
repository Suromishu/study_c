//
// Created by Mishu on 2025/5/13.
//

#include <stdio.h>

int main()
{
    char *string[5] = {"helo", "word", "next", "ping", "pong"};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", string[i][j]);
        }
        printf("\n");
    }

    return 0;
}
