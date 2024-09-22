#include <iostream>

int main(){

    int number {0};

    std::cout << "Saisir un entier : "<< std::endl;
    std::cin >> number;

    if (number < 0)
    {
        std::cout << number << " est negatif"<< std::endl;
    } else {
        std::cout << number << " est positif"<< std::endl;
    }
    
    std::cout << number << ((number < 0) ? " est negatif" : " est positif") << std :: endl;
}