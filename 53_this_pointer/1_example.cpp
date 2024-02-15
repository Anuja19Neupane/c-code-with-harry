#include <iostream>

class A
{
    int a;

public:
    // A set_data(int a)
    void set_data(int a)
    {
        this->a = a;
        // return *this;
    }

    void get_data()
    {
        std::cout << "The value of a is " << a << std::endl;
    }
};

int main()
{
    A a;
    // a.set_data(4).get_data();
    a.set_data(4);
    a.get_data();
    

    return 0;
}