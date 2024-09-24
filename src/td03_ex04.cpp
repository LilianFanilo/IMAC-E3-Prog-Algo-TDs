#include <iostream>

int main() {
    int age {};

    std::cout << "Entrez votre age : " << std::endl;
    std::cin >> age ;
    std::cin.fail();

    if (age < 0)
    {
        std::cout << "Erreur: vous avez mis un nombre negatif" << std::endl;
    } 
    else if( std::cin.fail() == true )
    {
        std::cin.clear();
        std::cin.ignore(255, '\n');

        std::cout << "Erreur: vous avez mis votre age en lettre" << std::endl;

    }
    else
    {
        std::cout << "Vous avez " << age << " ans" << std::endl;
    }
    
}