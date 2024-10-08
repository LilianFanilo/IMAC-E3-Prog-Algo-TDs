#include <iostream>

int somme(const int & a,const int & b){
    return a + b;
}

int main()
{
    int numberA {};
    int numberB {};

    std::cout << "Entrer votre premier nombre :" << std::endl;
    std::cin >> numberA ;
    std::cout << "Entrer votre deuxieme nombre :" << std::endl;
    std::cin >> numberB ;

    std::cout << "La somme des deux nombres est " << somme(numberA, numberB) << std::endl;


}