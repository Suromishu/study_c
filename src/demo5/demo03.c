//
// Created by Mishu on 2025/5/20.
//

#include <stdio.h>

int my_strlen1(const char *str)
{
    int count = 0;
    while (str[count] != '\0')
        count++;
    return count;
}

int my_strlen2(const char *str)
{
    const char *p = str;
    while (*p != '\0')
        p++;
    return p - str;
}

int my_strlen3(const char *str)
{
    if (*str == '\0')
        return 0;
    return 1 + my_strlen3(str + 1);
}

int main()
{
    char str[] = "Hello World!";
    int len = my_strlen3(str);
    printf("len is %d\n", len);

    return 0;
}
