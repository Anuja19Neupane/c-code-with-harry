#include <iostream>

class Complex
{
    int a,b;

    public:
        void set_number(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        // gives permission to sumcomplex to use private data of class Complex
        friend Complex sum_complex(Complex  o1 , Complex o2);
        void printnumber(){
            std:: cout << "Your number is " << a << " + " << b << "i" << std:: endl; 
        }
    
};

Complex sum_complex (Complex o1, Complex o2){
    Complex o3;
    o3.set_number((o1.a+o2.a) , (o1.b+o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.set_number(1,4);
    c1.printnumber();
    
    c2.set_number(5,3);
    c2.printnumber();

    sum=sum_complex(c1,c2);
    sum.printnumber();
    return 0;
}