#include <iostream>

int main(){
    int letterNumber {0};
    std::cout << "Entrez un nombre entre 1 et 26 :" << std::endl;
    std::cin >> letterNumber;

    letterNumber += 64 ;
    std::cout << "La lettre correspondante est : " << static_cast<char>(letterNumber) << std::endl;

}