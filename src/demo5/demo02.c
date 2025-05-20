//
// Created by Mishu on 2025/5/20.
//

#include <stdio.h>
#include <ctype.h>

int main()
{
    char test[] = "Hello World";
    char *p = &test[0];

    while (*p != '\0')
    {
        const char c = *p;
        if (islower(c))
            *p = toupper(c);
        p++;
    }

    printf("%s\n", test);

    return 0;
}