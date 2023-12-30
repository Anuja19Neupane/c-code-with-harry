#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: " << std::endl;
    std ::cin >> age;
    if (age < 18)
    {
        std::cout << "You can't come to party." <<std :: endl;
    }
    else if (age == 18)
    {
        std::cout << "You will get a kid ticket to party." <<std :: endl;
    }
    else if (age==0)
    { 
        std :: cout <<"invalid input";
    }

    else {
        std::cout << "You can come to party." <<std :: endl;
    }
}