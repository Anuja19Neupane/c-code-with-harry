#include <iostream>

int main()
{

    int marks[] = {23, 45, 67, 56}; // cpp allows to give empty array, ie. marks[]
    marks[2] = 48;                  // this will change 67 to 45
    std::cout << marks[0] << std::endl;
    std::cout << marks[1] << std::endl;
    std::cout << marks[2] << std::endl;
    std::cout << marks[3] << std::endl;

    // loop
    for (int i = 0; i < 4; i++)
    {
        std::cout << "The value of marks " << i << "is " << marks[i] << std::endl;
    }

    return 0;
}