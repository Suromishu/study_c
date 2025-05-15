//
// Created by Mishu on 2025/5/14.
//

#include <stdio.h>

void set_string(char string[])
{
    char* str = string;
    scanf("%[^\n]", str);
    scanf("\0", str);
}


int main()
{
    char string[10];
    set_string(string);

    printf("%s", string);
    return 0;
}