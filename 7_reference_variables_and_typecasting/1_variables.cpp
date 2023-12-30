#include <iostream>

int c = 45; // global variable

int main()
{
    int a, b, c;
    std ::cout << "Enter the value of a: " << std ::endl;
    std ::cin >> a;
    std ::cout << "Enter the value of b: " << std ::endl;
    std ::cin >> b;
    c = a + b; 
    std ::cout << "1st c is: " << c << std::endl; // it prints local variable's c
    std ::cout << "2nd c is: " << ::c << std::endl; // it prints global variable's c
    return 0;

}