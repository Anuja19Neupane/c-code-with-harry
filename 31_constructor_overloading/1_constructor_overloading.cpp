#include <iostream>

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void print_number()
    {
        std::cout << "Your number is " << a << " + " << b << "i" << std::endl;
    }
};

int main()
{
    
    Complex c1(5, 6);
    c1.print_number();

    Complex c2(5);
    c2.print_number();
    
    return 0;
}