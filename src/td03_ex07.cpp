#include <iostream>

int main()
{
    int number {};
    int counter {0};

    std::cout << "Entrer un nombre entier pour le Syracuse" << std::endl;
    std::cin >> number ;
    std::cout << number << ", ";

    while (number != 1)
    {
        if (number % 2 == 0)
        {
            number = number / 2 ; 
            std::cout << number << ", ";
        }
        else
        {
            number = 3 * number + 1 ;
            std::cout << number << ", ";
        }
        counter++;
    }

    std::cout << std::endl;
    std::cout << "le nombre de termes de la suite de Syracuse necessaires pour atteindre 1 est " << counter << std::endl;
   
}