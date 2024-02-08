#include <iostream>

// base class
class Employee
{
    public:
        int id;
        float salary;
        Employee(int inp_id)
        {
            id = inp_id;
            salary = 34.0;
        }
        Employee (){} //default constructor
};

// derived class
// for  public, syntax is:
// class Programmer :  public Employee
class Programmer : Employee
{
public:
    Programmer(int inp_id)
    {
        id = inp_id;
    }
    int language_code = 7;
    void get_data()
    {
        std::cout << id << std::endl;
    }
};

int
main()
{
    Employee anuja(1), anu(2);
    std::cout << anuja.salary << std::endl;
    std::cout << anu.salary << std::endl;
    Programmer skill_f(10);
    std:: cout << skill_f.language_code << std:: endl;
    //std:: cout << skill_f.id << std:: endl; this shows error, because in default derived class is private
    skill_f.get_data(); 

    return 0;
}