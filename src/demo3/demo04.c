//
// Created by Mishu on 2025/5/12.
//

#include <stdio.h>

char *string()
{
    char str[];
    printf("Enter a string: ");
    scanf("%s", str);
    return str;
}

int main()
{

    char *str = string();
    printf("%s\n", str);

    return 0;
}