#include <iostream>
#include <array>
#include <string>

char to_lower(char const c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 'a';
    }
    else
    {
        return c ;
    }
}

bool is_alpha(char const c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

std::array<int, 26> count_letters(std::string const& str)
{
    std::array<int,26> letters_count {};
    for (char c : str)
    {
        if (!is_alpha(c))
        {
            continue;
        }

        c = to_lower(c);

        size_t const letter_index {static_cast<size_t>(c) - 'a'};
        letters_count[letter_index] += 1 ;
        
    }

    return letters_count;
}

bool is_pangram(std::string const& str)
{
    std::array<int,26> const result {count_letters(str)};
    for (size_t i = 0; i < 26; i++)
    {
        if (result[i] == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string str {"Portez ce vieux whisky au juge blond qui fume"};
    std::cout << str << std::endl;
    if (is_pangram(str) == true)
    {
        std::cout << "C'est un pangramme" << std::endl;
    }
    else
    {
        std::cout << "Ce n'est pas un pangramme" << std::endl;
    }
    
    
    return 0;
}