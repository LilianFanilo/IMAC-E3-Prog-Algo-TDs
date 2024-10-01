#include <iostream>

int main()
{
    std::string word {};
    std::string reverse_word {};
    int i {1};
    int word_size {};

    std::cout << "Entrez un mot :" << std::endl;
    std::cin >> word;

    word_size = word.size();

    for ( char letter : word )
    {
            int letter_lenght = word_size - i;
            reverse_word += word[letter_lenght];
            i++;
    }
    
    if (word == reverse_word)
    {
        std::cout << word << " est un palindrome !" << std::endl;
    } 
    else
    {
        std::cout << word << " n'est pas un palindrome !" << std::endl;

    } 
    

}