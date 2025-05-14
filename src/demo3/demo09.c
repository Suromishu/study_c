//
// Created by Mishu on 2025/5/14.
//

#include <stdio.h>

void set_string(char str[5][5]);

void print_string(char str[5][5]);

int main()
{
    char str[5][5];

    set_string(str);
    print_string(str);

    return 0;
}

void set_string(char str[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf(" %c", &str[i][j]);
        }
    }
}

void print_string(char str[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", str[i][j]);
        }
        printf("\n");
    }
}

/*死板，但是简单可行……*/