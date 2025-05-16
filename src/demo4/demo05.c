//
// Created by Mishu on 2025/5/16.
//

#include <stdio.h>

int main()
{
    int a;
    int i;

    scanf("%d %d", &i, &a);
    printf("%d * %d = %d\n", i, a, i * a);
    printf("%d << %d = %d\n\n", i, a, i << a);
    printf("%d / %d = %d\n", i, a, i / a);
    printf("%d >> %d = %d\n", i, a, i >> a);

    return 0;
}