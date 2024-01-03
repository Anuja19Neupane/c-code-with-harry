#include <iostream>

int main() {

    int a=3;
    int* b= &a;
    int** c=&b;
    
    //adress of a
    std :: cout <<"The adress of a is:"<< &a<< std::endl;
    std :: cout <<"The adress of a is:"<< b<< std::endl;

    //value of a
    std :: cout <<"The value at adress of b is:"<< *b<< std::endl;
    std :: cout <<"The value of a is:"<< a<< std::endl;

    //pointer to pointer
    std :: cout <<"The adress of b is:" <<&b<< std::endl;
    std :: cout <<"The adress of b is:"<< c<< std::endl;


    return 0;
}