#include <iostream>

class Employee
{
    int id;
    int salary;

public:
    void set_id(void)
    {
        salary = 122;
        std::cout << "Enter the id of employee: " << std::endl;
        std::cin >> id;
    }
    void get_id(void)
    {
        std::cout << "The id of this employee is: " << id << std::endl;
    }
};

int main()
{
    Employee  fb[4]; // array declared for 4 people
    for (int i = 0; i < 4; i++)
    {
        fb[i].set_id();
        fb[i].get_id();

    }
    
    return 0;
}