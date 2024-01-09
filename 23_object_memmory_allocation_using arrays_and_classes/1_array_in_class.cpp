#include <iostream>

class Shop
{
    int item_id[100]; // maaximum 100 ota item_id ko lagi
    int item_price[100];
    int counter;

public:
    // init_counter function definition
    void init_counter(void)
    {
        counter = 0;
    }
    // set_price and display_price funtion declaration
    void set_price(void);
    void display_price(void);
};
// setprice function definition
void Shop ::set_price(void)
{
    std::cout << "Enter ID of your item no. " << counter + 1 << std::endl;
    std::cin >> item_id[counter];
    std::cout << "Enter Price of your item no. " << counter + 1 << std::endl;
    std::cin >> item_price[counter];
    counter++;
}

// display_price function definition
void Shop:: display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
    std:: cout << "The Price of item with id " << item_id[i] << " is " << item_price[i] << std::endl;
    }
    
}

int main()
{
    Shop kirana;
    kirana.init_counter();
    kirana.set_price();
    kirana.set_price();
    kirana.set_price();
    kirana.display_price();

    return 0;
}