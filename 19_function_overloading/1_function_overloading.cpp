#include <iostream>

// sum function using 2 arguments
int sum(int a, int b)
{
    return a + b;
    
}

// sum function using 3 arguments
int sum(int a, int b, int c)
{

    return a + b + c;
   
}

int main()
{
    std::cout << "Using 2 arguments:" << std ::endl;
    std::cout << "The sum of 2 and 3 is: " << sum(2, 3) << std::endl;
     std::cout << "Using 3 arguments:  " << std ::endl;
    std::cout << "The sum of 2,1 and 3 is: " << sum(2, 1, 3) << std::endl;
    return 0;
}