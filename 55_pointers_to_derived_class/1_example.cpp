#include <iostream>

class Base_class
{
public:
    int var_base;
    void display()
    {
        std::cout << "Displaying base class variable var_base " << var_base << std::endl;
    }
};

class Derived_class : public Base_class
{
public:
    int var_derived;
    void display()
    {
        std::cout << "Displaying Base class variable var_base " << var_base << std::endl;
        std::cout << "Displaying Derived class variable and var_derived " << var_derived << std::endl;
    }
};

int main()
{

    Base_class *base_class_pointer;
    Base_class obj_base;
    Derived_class obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class
    base_class_pointer->var_base = 34;
    // base_class_pointer -> var_derived=134 ; not allowed
    base_class_pointer->display();

    Derived_class *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 89;
    derived_class_pointer->display();

    return 0;
}