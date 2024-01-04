#include <iostream>

int main()
{

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = breakfast; // Meal also act as datatypes
    std::cout << m1<<std::endl;

    return 0;
}
