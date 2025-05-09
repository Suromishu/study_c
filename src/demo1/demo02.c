//
// Created by Mishu on 2025/5/10.
//

#include <stdio.h>

int calculate(int a, int b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return 0;
    }
}

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, calculate(a, b, '+'));
    return 0;
}