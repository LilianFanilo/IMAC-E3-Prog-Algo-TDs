#include <iostream>

int main(){
    int potatoes {0};
    int carrots {0};
    int salads {0};

    float price_potatoes {0};
    float price_carrots {0};
    float price_salads {0};

    std::cout << "Entrez le nombre de sacs de pommes de terre :" << std::endl;
    std::cin >> potatoes;

    std::cout << "Entrez le nombre de carottes :" << std::endl;
    std::cin >> carrots;

    std::cout << "Entrez le nombre de salades :" << std::endl;
    std::cin >> salads;

    price_potatoes = potatoes * 3;
    price_carrots = carrots * ((150 * 2.5)/1000);
    price_salads = salads * 1.2;

    float const total_price {price_potatoes + price_carrots + price_salads}; 

std::cout << "Le prix total de la commande est de " << total_price << std::endl;
std::cout << potatoes << " sacs de pommes de terre : " << price_potatoes << std::endl;
std::cout << carrots << " carottes : " << price_carrots << std::endl;
std::cout << salads << " salade : " << price_salads << std::endl;


}