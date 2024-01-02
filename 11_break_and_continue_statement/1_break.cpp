#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++)
    { 
        
        std ::cout << i <<std:: endl;
        if (i==3)
        {
            
            break; // break will terminate the loop after the condition is satisfied
        }
        
    }

    return 0;
}