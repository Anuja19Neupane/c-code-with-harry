#include <iostream>

int main()
{
    for (int i = 0; i < = 40; i++)
    {
        if (i == 2)
        {
            continue; // will go to loop when the condition is satisfied
                      // program will not go to next line instead it will go for loop
                      // 2 will not get print here
        }
        std::cout << i << std::endl;
    }

    return 0;
}