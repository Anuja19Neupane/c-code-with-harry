#include <iostream>

class Complex
{
    int a, b;

public:
    Complex(void); // constructor declaration

    void print_number()
    {
        std::cout << "Your number is " << a << " + " << b << "i" << std::endl;
    }
};
// constructor deifnition
Complex::Complex(void) // default constructor because no arguments
{
    a = 10;
    b = 34;
}

int main()
{
    Complex c1, c2, c3;
    c1.print_number();
    c2.print_number();
    c3.print_number();
    return 0;
}