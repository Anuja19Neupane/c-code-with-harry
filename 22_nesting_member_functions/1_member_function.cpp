#include <iostream>

class binary
{
    std::string s; // private member variable of the class
                   // Since it is declared as private, it cannot be accessed directly from outside the class

public:
    void read(void);
    void chk_bin(void);
    void ones(void); // function to caluculate one's complememnt
    void display(void);
};
void binary ::read(void)
{
    std::cout << "Enter a binary number: " << std::endl;
    std::cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            std::cout << "Incorrect binary format" << std::endl;
            exit(0);
        }
    }
}
void binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

// to display number
void binary::display(void)
{
    std::cout << "Displaying your binary number: " << std::endl;
    for (int i = 0; i < s.length(); i++)
    {
        std::cout << s.at(i);
    }
    std::cout << std::endl;
}
int main()
{
    binary b; // b is a object
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}