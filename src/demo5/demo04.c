//
// Created by Mishu on 2025/5/20.
//

#include <stdio.h>
#include <string.h>

int main()
{
    const char str1[] = "HelloWorld";
    char str2[20];

    strcpy(str2, str1);

    printf("%s\n", str2);

    return 0;
}