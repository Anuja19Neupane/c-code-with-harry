#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string st = "anuja neupane";
    std::string st2;
    // opening files using constructor

    // std::ofstream out("test.txt"); // write operation
    // out << st;

    std::ifstream in("test.txt"); // read operation
    getline(in, st2);
    std::cout << st2;

    return 0;
}