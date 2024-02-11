#include <iostream>
#include <cmath>

// 1st class for simplecalculation
class Simple_calculator
{
public:
    int sum, difference, product, division;

    void add(int, int);
    void subtract(int, int);
    void multiply(int, int);
    void divide(int, int);
};

// fuction to add two numbers
void Simple_calculator::add(int num1, int num2)
{

    sum = num1 + num2;
    std::cout << "The sum of two number is: " << sum << std::endl;
}

// fuction to subtract two numbers
void Simple_calculator::subtract(int num1, int num2)
{

    difference = num1 - num2;
    std::cout << "The difference of two number is: " << difference << std::endl;
}

// fuction to multiply two numbers
void Simple_calculator::multiply(int num1, int num2)
{

    product = num1 * num2;
    std::cout << "The product of two number is: " << product << std::endl;
}

// fuction to divide two numbers
void Simple_calculator::divide(int num1, int num2)
{

    division = num1 / num2;
    std::cout << "The division of two number is: " << division << std::endl;
}

// 2nd class for scientific calculator

class Scientific_calculator
{
public:
    // int power, sine_value, logarithmic_value, cosine_value;

    void power_of_number(int, int);
    void sine_of_number(int);
    void log_of_number(int number_for_log);
    void cosine_of_number(int number_for_cosine_value);
};

// function to find power
void Scientific_calculator::power_of_number(int base, int exponent)
{
    std::cout << "Enter the value of base and exponent respectively: ";
    std::cin >> base >> exponent;
    int power = pow(base, exponent);
    std::cout << "The power of " << base << " is " << power << std::endl;
}

// function to find sine of number
void Scientific_calculator::sine_of_number(int number_for_sine_value)
{
    std::cout << "Enter any number to find sine: ";
    std::cin >> number_for_sine_value;
    float angle_radians = number_for_sine_value * M_PI / 180.0;
    float sine_value = sin(angle_radians);

    std::cout << "The sine of " << number_for_sine_value << " is " << sine_value << std::endl;
}

// function to find log of number
void Scientific_calculator::log_of_number(int number_for_log)
{
    std::cout << "Enter any number to find natural log: ";
    std::cin >> number_for_log;
    float log_value = log(number_for_log);

    std::cout << "The natural log of " << number_for_log << " is " << log_value << std::endl;
}

// function to find cosine of number
void Scientific_calculator::cosine_of_number(int number_for_cosine_value)
{
    std::cout << "Enter any number to find sine: ";
    std::cin >> number_for_cosine_value;
    float angle_radians = number_for_cosine_value * M_PI / 180.0;
    float cosine_value = cos(angle_radians);

    std::cout << "The cosine of " << number_for_cosine_value << " is " << cosine_value << std::endl;
}


// 3rd class for hybrid calculator
class Hybrid_calculator : public Simple_calculator, public Scientific_calculator
{
public:
    void display_simple_calculator(int num1, int num2);
    void display_scientific_calculator(int num);
};

// Function to display results of simple calculator
void Hybrid_calculator::display_simple_calculator(int num1, int num2)
{
    std::cout << "Results of Simple Calculator:" << std::endl;
    add(num1, num2);
    subtract(num1, num2);
    multiply(num1, num2);
    divide(num1, num2);
}

// Function to display results of scientific calculator
void Hybrid_calculator::display_scientific_calculator(int num)
{
    std::cout << "Results of Scientific Calculator:" << std::endl;
    int base, exponent;
    power_of_number(base, exponent);
    sine_of_number(num);
    log_of_number(num);
    cosine_of_number(num);
}

int main()
{
    Hybrid_calculator calculator;
    int num1, num2, num;

    std::cout << "Enter any two numbers for Simple Calculator: ";
    std::cin >> num1 >> num2;

    calculator.display_simple_calculator(num1, num2);
    calculator.display_scientific_calculator(num);

    return 0;
}