#include <iostream>

int main()
{
    int num1, num2;
    std ::cout << "Enter the value of num1: \n"; // << is called insertion operator
            std::cin >>
        num1;                                   // >> is called extraction operator
    std ::cout << "Enter the value of num2: \n"; // << is called insertion operator
           std:: cin >>
        num2;
    std::cout << "the sum is: " << num1 + num2 << "\n";
    return 0;
}