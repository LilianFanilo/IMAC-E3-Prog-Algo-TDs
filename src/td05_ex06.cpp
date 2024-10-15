#include <iostream>

void invertCase(std::string & text){
    for (size_t letter : text)
    {
        if (letter >= 65 && letter <= 90)
        {
            letter += 32;
        } 
        else if (letter >= 97 && letter <= 122)
        {
            letter -= 32;
        } 

        std::cout << static_cast<char>(letter);
    }

    std::cout << std::endl;
}

// vowelNumber(){

// }

// wordNumber(){

// }

// invertText(){

// }

int main(){
    std::string text {};

    std::cout << "Entrer un text :" << std::endl;
    std::cin >> text;
    std::cout << text;

    invertCase(text);
}