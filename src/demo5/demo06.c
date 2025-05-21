//
// Created by Mishu on 2025/5/21.
//

#include <stdio.h>
#include <string.h>

int my_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
            return 0;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main()
{
    char str1[] = "ABCDEFGHIJKL";
    char str2[] = "abcde";

    const int result1 = my_strcmp(str1, str2);
    printf("%d\n", result1);

    const int result2 = strcmp(str1, str2);
    printf("%d\n", result2);

    return 0;
}