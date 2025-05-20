//
// Created by Mishu on 2025/5/20.
//

#include <stdio.h>
#include <stdlib.h>

char *cut1(const char *str, const int start, const int end) {
    const auto result = (char *) malloc(end - start + 1);
    for (int i = 0; i < end - start; i++)
    {
        result[i] = str[start + i];
    }
    result[end - start] = '\0';
    return result;
}

char *cut2(char *str, const int start, const int end)
{
    int j = 0;
    for (int i = start; i < end; i++)
        str[j++] = str[i];

    str[j] = '\0';
    return str;
}

int main()
{
    char name[] = "HelloWorld";

    char *res1 = cut1(name, 2, 6);
    char *res2 = cut2(name, 1, 6);

    printf("res1 = '%s'\n", res1);
    printf("res2 = '%s'\n", res2);

    return 0;
}
