#include <iostream>

union employee
{
    int rice;
    char car;
    float gold;
};

int main()
{
    union employee m1;
    m1.rice = 34;
    m1.car='c'; // this will override the value of rice and 
    std::cout<<m1.rice<<std::endl; // garvage value will be printed here
    std::cout<<m1.car<<std::endl; // correct value will be provided here

        return 0;
}