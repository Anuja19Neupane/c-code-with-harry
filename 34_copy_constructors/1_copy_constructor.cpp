#include <iostream>

class Number
{
    int a;

public:
    Number()
    {

        a = 0;
    } // default constructor
    Number(int num)
    {
        a = num;
    }
    // copy constructor
    // when there is no copy constructor, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        std::cout << "Copy constructor called!" << std::endl;
        a = obj.a;
    }

    void display()
    {
        std::cout << " The number of this object is " << a << std::endl;
    }
};

int main()
{
    Number x, y, z(78), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // copy constructor invoked
    z1.display();

    z2 = z; // copy constructor not called
    z2.display();

    Number z3 = z; // copy constructor called
    z3.display();
    return 0;
}