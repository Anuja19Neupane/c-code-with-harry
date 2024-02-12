#include <iostream>

class Base1
{
    int data1;

public:
    Base1(int i) // constructor
    {
        data1 = i;
        std::cout << "Base 1 class constructor called. " << std::endl;
    }
    void print_data_base1(void)
    {
        std::cout << "The value of data1 is: " << data1 << std::endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i) // constructor
    {
        data2 = i;
        std::cout << "Base 2 class constructor called. " << std::endl;
    }
    void print_data_base2(void)
    {
        std::cout << "The value of data2 is: " << data2 << std::endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        std::cout << "Derived class constructor called" << std::endl;
    }
    void print_data_derived(void)
    {
        std::cout << "The value of derived1 is " << derived1 << std::endl;
        std::cout << "The value of derived2 is " << derived2 << std::endl;
    }

};

int main()
{
    Derived anuja(1, 2, 3, 4);
    anuja.print_data_base1();
    anuja.print_data_base2();
    anuja.print_data_base3();
    anuja.print_data_base4();
    return 0;
}