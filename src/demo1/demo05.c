//
// Created by Mishu on 2025/5/10.
//

#include <stdio.h>

int factorial(int n)
{
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main()
{
    int i;
    scanf("%d", &i);

    printf("%d :: %d\n", i, factorial(i));
    return 0;
}