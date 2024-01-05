#include <iostream>

// call by reference using pointers
void swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 4, y = 5;
    std::cout << "Before: x = " << x << " y = " << y << std::endl;
    swap_pointer(&x,&y);
    std::cout << "After: x = " << x << " y = " << y << std::endl;

    return 0;
}