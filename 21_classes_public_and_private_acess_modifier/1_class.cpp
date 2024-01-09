#include <iostream>

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void set_data(int a1, int b1, int c1); // declaration of function
    void get_data()
    {
        std::cout << "The value of a is: " << a << std::endl;
        std::cout << "The value of b is: " << b << std::endl;
        std::cout << "The value of c is: " << c << std::endl;
        std::cout << "The value of d is: " << d << std::endl;
        std::cout << "The value of e is: " << e << std::endl;
    }
};
// set_data function definition
void Employee ::set_data(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

// function get_data

int main()
{
    Employee anuja; // anuja is object here
    //anuja.a=123; --> this will show error because a is private and 
                        // only a function that is inside the class(function should be public) can acess it
    anuja.d=34; // this is allowed, because b and e are public so we can access it like this
    anuja.e=56;
    anuja.set_data(2,4,5); //a ,b,c are private, so only a function that is public inside a class can acess it
    anuja.get_data();
    return 0;
}