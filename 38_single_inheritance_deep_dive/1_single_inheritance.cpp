#include <iostream>

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void set_data();
    int get_data1();
    int get_data2();
};
void Base ::set_data(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::get_data1()
{
    return data1;
}

int Base ::get_data2()
{
    return data2;
}

class Derived : public Base
{ // class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()

{
    data3 = data2 * get_data1();
}

void Derived ::display()

{
    std::cout << "The value of data 1 is: " << get_data1() << std::endl;
    std::cout << "The value of data 2 is: " << data2 << std::endl;
    std::cout << "The value of data 3 is: " << data3 << std::endl;
}
int main()
{
    Derived der;
    der.set_data();
    der.process();
    der.display();

    return 0;
}