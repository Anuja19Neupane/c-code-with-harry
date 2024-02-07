#include <iostream>

int count = 0;

class num
{
public:
    // constructor
    num()
    {
        count++;
        std::cout << "This is the time when constructor is called for object number " << count << std::endl;
    }
    // destructor
    ~num()
    {
        std::cout << "This is the time when destructor is called for object number " << count << std::endl;
        count --;
    }
};

int main() 
{
    std:: cout << "We are inside our main function" << std:: endl;
    std:: cout << "Creating first object n1" << std:: endl;
    num n1;{ // object
        std::cout<<"Entering this block" << std:: endl;
        std:: cout <<"Creating rwo more objects" << std::endl;
        num n2, n3;
        std:: cout << "Exiting this block" << std:: endl;
    }
    std:: cout << "Back to main" << std:: endl;
    return 0;
}