// when static variables is written, inline function is not recomended
#include <iostream>

inline int product(int a, int b)
{
    static int c = 0; // this executes only once
    c = c + 1;
    return a * b + c;
}

int main()
{
    int a, b;
    std::cout << "Enter the value of a and b: " << std::endl;
    std::cin >> a >> b;
    std::cout << "The product of a and b is: " << product(a, b) << std::endl;
    std::cout << "The product of a and b is: " << product(a, b) << std::endl;
    std::cout << "The product of a and b is: " << product(a, b) << std::endl;
    std::cout << "The product of a and b is: " << product(a, b) << std::endl;

    return 0;
}