#include <iostream>

int main()
{
    int number {0};
    std::cout << "Entrer un nombre :" << std::endl;
    std::cin >> number;

for (int i = 0; i < number; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}

for (int i = 0; i < number; i++)
{
    for (int j = 0; j < number - i - 1; j++)
    {
        std::cout << " ";
    }

    for (int j = 0; j < 1 + 2*i; j++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}

for (int i = 0; i < number; i++)
{
    if (i == 0 || i == number-1)
    {
        for (int j = 0; j < number; j++)
        {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }
    else
    {
        for (int j = 0; j < number; j++)
        {
            if (j == 0 || j == number-1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
            
        }   
        
        std::cout << std::endl;
    }

    
}
    
}