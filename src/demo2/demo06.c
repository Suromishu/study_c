//
// Created by Mishu on 2025/5/11.
//

#include <stdio.h>
#define NDEBUG
#include <assert.h>

int main()
{
    int a = 10;
    int b;
    scanf("%d", &b);
    assert(a - b >= 0);
    printf("%d\n", a - b);
    return 0;
}