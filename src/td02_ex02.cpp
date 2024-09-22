#include <iostream>

int main()
{
    float number1 {0};
    float number2 {0};
    float number3 {0};
    float somme_numbers {0};
    float moyenne {0};

    std::cout << "Entrer le premier nombre" << std::endl;
    std::cin >> number1;

    std::cout << "Entrer le deuxieme nombre" << std::endl;
    std::cin >> number2;

    std::cout << "Entrer le troisieme nombre" << std::endl;
    std::cin >> number3;

    somme_numbers = number1 + number2 + number3;
    moyenne = somme_numbers / 3;
    std::cout << "La somme des trois nombres est "<< somme_numbers << std::endl;
    std::cout << "La moyenne des trois nombres est "<< moyenne << std::endl;

    return 0;
}