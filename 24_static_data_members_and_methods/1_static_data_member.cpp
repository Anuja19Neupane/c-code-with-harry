#include <iostream>

class Employee{
    int id;
    static int count; // this count variable is acessed by all objects
                // count is the static data member of class Employee

    public:
        void set_data(void)
        {
            std:: cout << "Enter the id: " << std:: endl;
            std:: cin >> id;
            count ++;
        }
        void get_data(void)
        {
            std::cout << "The id of this employee is: " << id << " and this employee number is: "<<count << std::endl;
        }
};

int Employee::count; // default value is 0
// can do this also
// int Employee::count=100;
int main() {
    Employee anusha, anu, sneha;

    anusha.set_data();
    anusha.get_data();

    anu.set_data();
    anu.get_data();

    sneha.set_data();
    sneha.get_data();


    return 0;
}