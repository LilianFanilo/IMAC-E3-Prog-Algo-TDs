#include <iostream>

int main(){
    int number {0};
    int even {0};
    int odd {1};

    std::cout << "Saisir un nombre positif ou negatif" << std::endl;
    std::cin >> number;

    if (number % 2 == 0)
    {
        while (even < number)
        {
            std::cout << even << std::endl;
            even += 2;
        }

    } else {
        while (odd < number)
        {
            std::cout << odd << std::endl;
            odd += 2;
        }
    }
    
}