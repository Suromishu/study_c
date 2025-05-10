//
// Created by Mishu on 2025/5/10.
//

#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void print_fibonacci(int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\n", fibonacci(i));
}

int main()
{
    print_fibonacci(10);
}