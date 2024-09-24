#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
    std::srand(std::time(nullptr));
    int random_number {std::rand() % 100 + 1};
    int guess_number {0};

    while (random_number != guess_number)
    {
        std::cout << "Devine le nombre aleatoire entre 1 et 100 :" << std::endl;
        std::cin >> guess_number;

        if (guess_number == random_number)
        {
            std::cout << "Victoire !" << std::endl;
            break;
        } 
        else if (guess_number <= random_number)
        {
            std::cout << "Le nombre est plus grand" << std::endl;
        }
        else if (guess_number >= random_number)
        {
            std::cout << "Le nombre est plus petit" << std::endl;
        }
    }
    
}