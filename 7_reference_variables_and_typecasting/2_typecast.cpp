#include <iostream>

int c = 45.87; // global variable

int main()
{
    float d = 3.45;
    //both will work same
    std ::cout << " The value of d is: " << (int)d << std ::endl;
    std ::cout << " The value of c is: " << int(c) << std ::endl; // this threw warning
    return 0;
}