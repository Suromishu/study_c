//
// Created by Mishu on 2025/5/10.
//

#include <stdio.h>

int get_length(char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);
    int length = get_length(str);

    printf("The length of the string is: %d\n", length);
    return 0;
}