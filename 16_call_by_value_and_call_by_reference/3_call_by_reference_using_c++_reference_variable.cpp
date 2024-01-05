#include <iostream>

// call by reference using c++ reference variable 
void swap_reference_var(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 5;
    std::cout << "Before: x = " << x << " y = " << y << std::endl;
    swap_reference_var(x,y);
    std::cout << "After: x = " << x << " y = " << y << std::endl;

    return 0;
}