//
// Created by Mishu on 2025/5/10.
//

#include <stdio.h>

int main()
{
    int a = 17;
    void *p = &a;

    int *pa = p;

    printf("%d\n", *pa);

    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%p\n", pa);

    printf("-------------------");

    int i = 19;
    int x = 22;
    int *pi = &i;
    int *px = &x;
    int **pi2 = &pi;

    *pi2 = px;
    *pi = 30;
    printf("%d\n", i);
    printf("%d\n", x);
    return 0;

}