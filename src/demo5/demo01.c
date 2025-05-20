//
// Created by Mishu on 2025/5/20.
//


int function1(int nums[][10], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += nums[i][i];

    return sum;
}

int function2(int nums[][10], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += nums[i][n - 1 - i];

    return sum;
}