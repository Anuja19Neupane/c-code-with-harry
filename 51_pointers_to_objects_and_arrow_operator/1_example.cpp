#include <iostream>

class Complex{
    int real , imaginary;
    public:
        void get_data()
        {
            std:: cout << "The real part is " << real << std:: endl;
            std:: cout << "The imaginary part is " << imaginary << std:: endl;
        }
        void set_data(int a , int b)
        {
            real = a;
            imaginary = b;
        }

};

int main() {
    // Complex c1;
    // this is equivalent to:
    Complex *ptr = new Complex; // creating object using new operator

    // c1.set_data(2,45);
    // c1.get_data();
  //  this is equivalent to:

    // Complex *ptr = & c1; // creating object using pointer
    //(*ptr).set_data(2,45); is good as 
    ptr -> set_data(2,45);
    //(*ptr).get_data(); is good as
    ptr -> get_data();

    // array of objects
    Complex *ptr1 = new Complex [4];
    ptr -> set_data(2,45);
    ptr -> get_data();
    
    return 0;
}