#include <iostream>

class Bank_deposit
{
    int principal;
    int years;
    float interest_rate;
    float return_value;

public:
    Bank_deposit()
    {
    } //if we didn't gave p, y , r , then also our object should be created
    Bank_deposit(int p, int y, float r); // rate r can be 0.3
    Bank_deposit(int p, int y, int r);
    void show(); // function
};

Bank_deposit::Bank_deposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interest_rate = r;
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
}

Bank_deposit::Bank_deposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interest_rate = float(r) / 100;
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
}

void Bank_deposit::show()
{
    std::cout << "The principal amount was " << principal << std::endl
              << "Return value after " << years
              << "years is " << return_value <<
                std::endl;
}

int main()
{
    Bank_deposit bd1 , bd2, bd3;
    int p , y;
    float r;
    int R;

    std::cout << "Enter the value of p , y , r: " << std:: endl;
    std:: cin >> p >> y >> r;
    bd1=Bank_deposit(p,y,r);
    bd1.show();

    std::cout << "Enter the value of p , y , R: " << std:: endl;
    std:: cin >> p >> y >> R;
    bd1=Bank_deposit(p,y,R);
    bd1.show();
    return 0;
}