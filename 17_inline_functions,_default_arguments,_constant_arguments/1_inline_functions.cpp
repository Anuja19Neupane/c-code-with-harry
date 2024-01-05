#include <iostream>

inline int product(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    std::cout << "Enter the value of a and b: " << std::endl;
    std::cin >> a >> b;
    std::cout << "The product of a and b is: " << product(a, b) << std::endl;

    return 0;
}