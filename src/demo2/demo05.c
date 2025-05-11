//
// Created by Mishu on 2025/5/11.
//

#include <stdio.h>


char* to_upper(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return str;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("%s\n", to_upper(str));

    return 0;
}