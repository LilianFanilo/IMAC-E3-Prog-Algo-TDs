#include <iostream>
// manque le "s" de iostream

int main()
{
    float const pi {3.141592} ; // manque le ";"
    float a {pi*3}; // je veux le résultat de pi (environ 3.141592) fois 3
    //transformé en float
    int b {8};

    a += 20;  // je veux ajouter le nombre 20 à la valeur de b 
    // "20" est du mauvais type;

    b = b * 15; // je veux modifier la valeur de b en la multipliant par 15
    // b était une constante

    std::cout << "a: " << a << std::endl;
    // manque un "<"

    std::cout << "b: " << b << std::endl;
    // manque le ";"

    return 0;
}