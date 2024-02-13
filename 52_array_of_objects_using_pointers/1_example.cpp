#include <iostream>

class Shop_item
{
    int id;
    float price;
    public:
        void set_data(int a , float b)
        {
            id=a;
            price=b;
        }
        void get_data(void)
        {
            std:: cout << "Code of this item is " << id << std:: endl;
            std:: cout << "Price of this item is " << price << std:: endl;
        }

};

int main() {
    int size=2;
    // int *ptr = & size;
    // int *ptr - new int [34];
    // this two lines of code is equivalent to
    Shop_item *ptr = new Shop_item[size]; // shop is like a datatype here
    Shop_item *ptr_temp = ptr; // this is because
    //      1 2 3
    //      ^
    //      |
    //      |
    //      ptr
    //      ptr_temp
    // suppose there are three stores

    int p,i;
    float q;
    for ( i = 0; i < size; i++)
    {
       std:: cout << "Enter Id and price of item " << i+1 << std:: endl;
       std:: cin >> p >> q;

       // (*ptr).set_data(p,q); // dereferencing
       ptr -> set_data(p,q);
       ptr++;
    }
    

    for (  i = 0; i < size; i++)
    {
        std:: cout << "Item number: " << i+1 << std:: endl;
        ptr_temp -> get_data();
        ptr_temp++;  
       
    }
    
    


    return 0;
}