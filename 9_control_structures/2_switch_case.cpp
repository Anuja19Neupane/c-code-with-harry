#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age: " << std::endl;
    std ::cin >> age;
    switch (age)
    {
        case 18:
            std:: cout <<"You are 18."<< std::endl;
        break;

        case 22:
            std:: cout <<"You are 22."<< std::endl;
        break;
        
        default:
        std::cout << "No special cases."<< std::endl;
    }
    return 0;
}