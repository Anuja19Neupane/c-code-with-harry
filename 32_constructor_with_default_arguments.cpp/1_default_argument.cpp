#include <iostream>

class Simple
{
    int data_1;
    int data_2;

    public:
        Simple(int a, int b = 9){
            data_1=a;
            data_2=b;
    }
    void print_number()
    {
        std::cout << "Your number is " << data_1 << " + " << data_2 << "i" << std::endl;
    }
};

int
main()
{
    Simple S(1); // cause value of b in default is 9
    S.print_number();
    return 0;
}