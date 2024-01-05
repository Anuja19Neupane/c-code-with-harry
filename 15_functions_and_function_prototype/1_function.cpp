#include <iostream>

//function definition
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int num1, num2;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the sec  number: " << std::endl;
    std::cin >> num2;
    std::cout<<"The sum is: " << sum(num1,num2)<<std::endl; // function call
    return 0;
}