#include <iostream>

int main()
{
    int marks[] = {23, 45, 67, 56}; 
    int *p = marks;
    std::cout << "The value of *p is " << *p << std::endl;
    std::cout << "The value of *(p+1) is " << *(p+1) << std::endl;
    std::cout << "The value of *(p+2) is " << *(p+2)  << std::endl;
    std::cout << "The value of *(p+3) is " << *(p+3)  << std::endl;

    return 0;
}