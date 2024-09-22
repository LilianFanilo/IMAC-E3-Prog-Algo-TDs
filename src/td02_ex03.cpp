#include <iostream>

int main(){
    int number {11};
    std::cout << number << std::endl;
    std::cout << "11 / 2 = " << static_cast<float>(number) / 2 << std::endl;
    std::cout << "11 / 2.0f = " << number / 2.0f << std::endl;
    
}