/*
Fibonacci sequence study
*/

#include <iostream>
#include <chrono>

class Fibonacci
{
public:
    int fib(int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        return fib(n - 1) + fib(n - 2);
    }
    int DynamicFib(int n)
    {
        if (n <= 1)
        {
            return n;
        }

        int prev = 0;
        int current = 1;

        for (int i = 2; i <= n; i++)
        {
            int next = prev + current;
            prev = current;
            current = next;
        }

        return current;
    }
};

int main()
{
    Fibonacci fibonacci;
    std::cout << fibonacci.DynamicFib(10) << std::endl;
    return 0;
}