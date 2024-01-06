#include <iostream>

int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int a;
    std::cout << "Enter the number: " << std::endl;
    std::cin >> a;
    std::cout << "The term in fibonacci sequence at position " << a << " is " << fibonacci(a) << std::endl;

    return 0;
}