#include <iostream>

struct employee
{
    int employee_id;
    char fav_char;
    float salary;
};

int main()
{

    struct employee anuja;
    anuja.employee_id = 01;
    anuja.fav_char = 'g';
    anuja.salary = 1278.34;

    struct employee tilasma;
    tilasma.employee_id = 02;
    tilasma.fav_char = 'j';
    tilasma.salary = 12756.34;

    struct employee binita;
    binita.employee_id = 03;
    binita.fav_char = 'c';
    binita.salary = 12546.34;

    std::cout << "ANUJA'S INFORMATION" << std::endl;
    std::cout<<"The value is "<<anuja.employee_id<<std::endl;
    std::cout<<"The value is "<<anuja.fav_char<<std::endl;
    std::cout<<"The value is "<<anuja.salary<<std::endl;

    std::cout << "TILASMA'S INFORMATION" << std::endl;
    std::cout<<"The value is "<<tilasma.employee_id<<std::endl;
    std::cout<<"The value is "<<tilasma.fav_char<<std::endl;
    std::cout<<"The value is "<<tilasma.salary<<std::endl;

    std::cout << "BINITA'S INFORMATION" << std::endl;
    std::cout<<"The value is "<<binita.employee_id<<std::endl;
    std::cout<<"The value is "<<binita.fav_char<<std::endl;
    std::cout<<"The value is "<<binita.salary<<std::endl;

    return 0;
}