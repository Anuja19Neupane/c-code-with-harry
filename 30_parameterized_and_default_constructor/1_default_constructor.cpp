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
    a = 0;
    b = 0;
}

int main()
{
    Complex a;
    a.print_number();
  
    return 0;
}