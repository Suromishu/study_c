//
// Created by Mishu on 2025/5/13.
//

#include <stdio.h>

int fibonacci(int n)
{
    if (n < 3)
        return n - 1;

    int fib[2] = {0, 1};
    for (int i = 3; i <= n; i++)
    {
        int a = i % 2;
        *(fib + 1 - a) = *fib + *(fib + 1);
    }
    return fib[1 - n % 2];
}

int main()
{
    printf("%d\n", fibonacci(20));
    return 0;
}