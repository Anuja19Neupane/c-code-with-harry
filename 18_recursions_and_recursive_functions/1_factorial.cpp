//recursion example
#include <iostream>

int factorial(int n)
    {
        if (n<=1)
        {
            return 1;
        }
        return n* factorial(n-1);
    }

int main() {
    int a;
    std::cout<< "Enter a number: " << std:: endl;
    std::cin >> a;
    std::cout << "The factorial of "<< a<< " is: " <<factorial(a) << std:: endl;
    
    return 0;
}