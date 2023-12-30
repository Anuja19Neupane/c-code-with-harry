#include <iostream>
#include <iomanip> // for manipulator
                   //
int main()
{
    int a = 99;
    int b = 189;
    std::cout << "a is: " <<std:: setw(3) << a << std::endl; // provides space for 3 digit
    std::cout << "b is: " <<std:: setw(3)<< b << std::endl;
    std ::cout << "sum is : "<<std:: setw(3) << a + b << std::endl;
    return 0;
}