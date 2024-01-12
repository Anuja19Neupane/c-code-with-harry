#include <iostream>

class Complex
{
    int a, b;

public:
    Complex(int , int); // constructor declaration

    void print_number()
    {
        std::cout << "Your number is " << a << " + " << b << "i" << std::endl;
    }
};
// constructor deifnition
Complex::Complex(int x , int y) // parameterized constructor because  arguments are there
{
    a = x;
    b = y;
}

int main()
{
    // this 2 will work same
    Complex a(5,6);
    Complex b= Complex(5,6);
    a.print_number();
    b.print_number();
    return 0;
}