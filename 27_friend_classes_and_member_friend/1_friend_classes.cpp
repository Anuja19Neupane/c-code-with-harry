#include <iostream>

// forward declatarion
class Complex;

class Calculator
{
    public:
        int add(int a, int b)
        {
            return (a + b);
        }
        // definition is down, this is only declaration
        int sum_real_complex(Complex, Complex);
        int sum_complex_complex(Complex, Complex);
};

class Complex
{
    int a, b;
    // individually declaring function as friend
    // friend int Calculator ::sum_real_complex(Complex , Complex );
    // friend int Calculator ::sum_complex_complex(Complex , Complex);

    // declaring whole class as function
    friend class Calculator;

public:
    void set_number(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        std::cout << "Your number is " << a << " + " << b << "i" << std::endl;
    }
};

// definition should be written here
int Calculator::sum_real_complex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sum_complex_complex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.set_number(1, 4);
    o2.set_number(7, 4);
    Calculator calc; // object of class Calculator
    int res = calc.sum_real_complex(o1, o2);
    std::cout << "The sum of real part of o1 and o2 is " << res << std::endl;
    int res_c = calc.sum_complex_complex(o1, o2);
    std::cout << "The sum of complex part of o1 and o2 is " << res_c << std::endl;

    return 0;
}