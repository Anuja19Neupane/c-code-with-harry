#include <iostream>

int a = 34; //global variable
void sum()
{
    int c = 2;
    std ::cout << a;
}
int main()
{
    int a = 6; // local variable
    a = 45;    // this will change local variable
    int b = 9;
    std ::cout << "value of a is: " << a;
    std ::cout << "\nvalue of b is: " << b;
    return 0;
}
