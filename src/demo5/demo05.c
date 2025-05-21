//
// Created by Mishu on 2025/5/20.
//

#include <stdio.h>
#include <string.h>

char *my_strcpy(char *dest, const char *src)
{
    char *p = dest;
    while ((*dest++ = *src++)) {}
    return p;
}

char *my_strcat(char *dest, const char *src)
{
    char *p = dest;
    char *p1 = dest;
    while (*dest++ != '\0')
        *p1++;
    while ((*p1++ = *src++)){}
    return p;
}

int main()
{
    const char str1[] = "Hello World!";
    char str2[30];

    char *test1 = my_strcpy(str2, str1);
    printf("%s\n", str2);
    printf("%s\n", test1);

    char *test2 = my_strcat(str2, str1);
    printf("%s\n", str2);
    printf("%s\n", test2);

    char *test3 = strcat(str2, str1);
    printf("%s\n", str2);
    printf("%s\n", test3);

    return 0;
}