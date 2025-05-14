//
// Created by Mishu on 2025/5/14.
//

#include <stdio.h>

int main()
{
    char string[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%c", &string[i][j]);
        }
    }

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
/*emm…长的跟java似的…………*/