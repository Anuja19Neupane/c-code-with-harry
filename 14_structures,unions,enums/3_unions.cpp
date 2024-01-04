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
    std::cout<<m1.rice<<std::endl;

        return 0;
}