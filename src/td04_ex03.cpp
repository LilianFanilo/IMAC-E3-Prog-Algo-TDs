#include <iostream>
#include <vector>
#include <array>

int main()
{
    long long int start_number {};
    long long int number {};
    std::vector<int> number_array {};
    int counter {};
    std::array<int, 10> occurences {}; 

    std::cout << "Entrez un nombre positif :" << std::endl;
    std::cin >> start_number;

    number = start_number;

while (number > 0)
{
    int digit {};

    digit = number % 10;

    for (int i = 0; i < occurences.size() ; i++)
    {
        if ( digit == i)
        {
            occurences[i] += 1;
        }
    }
    
    
    number_array.push_back(digit);

    counter ++;
    number /= 10;
}   

std::cout << "Voici le nombre d'occurences de chiffre de " << start_number << std::endl ;

    for (std::size_t i {0}; i < occurences.size(); i++)
    {
        std::cout << i << ":" << occurences[i] << ", ";
    }

std::cout << std::endl ;

    int max_occurence {};
    int digit_occurence {};

    for (std::size_t j {0}; j < occurences.size(); j++)
    {
        if (occurences[j] > max_occurence)
        {
            max_occurence = occurences[j] ;
            digit_occurence = j ;
        }
        
    }

    std::cout << "Le chiffre qui apparait le plus souvent est " << digit_occurence << std::endl ;    

}