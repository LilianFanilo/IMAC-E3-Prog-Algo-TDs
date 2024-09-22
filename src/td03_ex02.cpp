#include <iostream>

int main(){
    int number {0};
    int total {0};
    int iteration {0};
    while (number >= 0)
    {
        std::cout << "Saisir un nombre positif :" << std::endl;
        std::cin >> number;
        if (number < 0 )
        {
            std::cout << "total : " << total << " moyenne : " << total / iteration << std::endl;
            break;
        } 

        total += number;
        iteration ++;
    }
    
}