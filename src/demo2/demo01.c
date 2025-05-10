//
// Created by Mishu on 2025/5/10.
//

#include <stdio.h>

int main()
{
    int a = 22;
    int *p = &a;

    printf("%d\n", *p);
    printf("%zd\n", sizeof(p));
    return 0;
}