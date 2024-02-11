#include <iostream>

// base 1
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a; // protected
    }
};

// base 2
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a; // protected 
    }
};

// derived clas
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        std::cout << "The value of Base1 is: " << base1int << std::endl;
        std::cout << "The value of Base2 is: " << base2int << std::endl;
        std::cout << "The sum of these values is: " << base1int + base2int << std::endl;
    }
};

int main()
{
    Derived anuja;
    anuja.set_base1int(24);
    anuja.set_base2int(5);
    anuja.show();

    return 0;
}