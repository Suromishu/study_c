//
// Created by Mishu on 2025/5/13.
//

#include <stdio.h>

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n < 4)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    printf("%d\n", fibonacci(20));
    return 0;
}