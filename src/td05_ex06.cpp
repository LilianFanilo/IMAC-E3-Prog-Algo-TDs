#include <iostream>
#include <string>
#include <vector>

/*
    Écrire une fonction qui prend en paramètre une chaîne de caractères et qui modifie cette chaîne en remplaçant les lettres minuscules par des lettres majuscules et vice-versa.
*/
std::string change_case(std::string const& str)
{
    std::string new_str {};
    for (char letter : str)
    {
        if (letter >= 'A' && letter <= 'Z')
        {
            new_str += letter - 'A' + 'a';
        }
        else if (letter >= 'a' && letter <= 'z')
        {
            new_str += letter + 'A' - 'a';
        }
        else {
            new_str += letter;
        }
    }

    return new_str;
}

/*
    Écrire une fonction qui prend en paramètre une chaîne de caractères et qui retourne le nombre de voyelles de cette chaîne.
*/
int vowel_count(std::string const& str)
{
    int vowel_count {};
    for (char letter : str)
    {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'Y')
        {
            vowel_count ++;
        }
        
    }
    
    return vowel_count;
}

/*
    Écrire une fonction qui prend en paramètre une chaîne de caractères et qui retourne le nombre de mots de cette chaîne. On considère que les mots sont séparés par un ou plusieurs espaces.
*/
int word_count(std::string const& str)
{
    int word_count {};
    for (int i = 0; i < str.size() ; i++)
    {
        if (str[i] == ' ' && str[i-1] != ' ')
        {
            word_count++;
        }
    }
    if (word_count == 0)
    {
        word_count == 1;
    }
    
    return word_count ;
}

/*
    Écrire une fonction qui prend en paramètre une chaîne de caractères et qui retourne la même chaîne écrite à l'envers.
*/
std::string reverse_text(std::string const& str)
{
    std::string reverse {};
    for (int i = 0; i < str.size(); i++)
    {
        reverse += str[str.size() - i - 1] ;
    }

    return reverse;
}

/*
    Écrire une fonction qui prend en paramètre une chaîne de caractères et qui retourne true si la chaîne est un nombre entier.
    ex : "946" => true & "bonjour" => false
*/
bool number_test(std::string const& str)
{
    for (unsigned char letter : str)
    {
        if (std::isdigit(letter) == true)
        {
            continue;
        } 
        else
        {
            return false;
        }
    }  

    return true;
}

int main()
{
    std::string str {"Bonjour aux Messieurs de Paris"};
    std::cout << change_case(str) << std::endl;
    std::cout << "Il y a " << vowel_count(str) << " voyelles !" << std::endl;
    std::cout << "Il y a " << word_count(str) << " mots !" << std::endl;
    std::cout << reverse_text(str) << std::endl;
    if (number_test(str) == true)
    {
        std::cout << "C'est un nombre entier" << std::endl;
    } 
    else
    {
        std::cout << "Ce n'est pas un nombre entier" << std::endl;
    }
    
    return 0;
}