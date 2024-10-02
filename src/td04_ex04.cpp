#include <iostream>
#include <vector>

int main ()
{
    long int stage {};
    long int number_enemies {};
    std::vector<long int> level_ennemies {};
    std::vector<long int> multiples_array {};
    std::vector<long int> total_level_array {};

    std::cout << "Entrez le niveau :" << std::endl;
    std::cin >> stage ;
    std::cout << "Niveau: " << stage << std::endl;

    std::cout << "Entrez le nombre d'ennemies vaincus :" << std::endl;
    std::cin >> number_enemies ;
    std::cout << "Nombres d'ennemies: " << number_enemies << std::endl;

    for (int i = 0; i < number_enemies; i++)
    {
        long int level {};

        std::cout << "Entrez le niveau de l'ennemie "<< i + 1 <<" :" << std::endl;
        std::cin >> level ;
        
        level_ennemies.push_back(level); 
    }

    for (long int lvl_ennemy : level_ennemies)
    {
        std::cout << lvl_ennemy << ", ";
    }

    std::cout << std::endl ;
    
    for (int j = 0; j < level_ennemies.size() ; j++)
    {
        long int enemy_multiple = level_ennemies[j];

        for (int k = 0;  enemy_multiple < stage; k++)
        {
            enemy_multiple = level_ennemies[j] * (k + 1) ;
            if (enemy_multiple < stage)
            {
                multiples_array.push_back(enemy_multiple);
                std::cout << enemy_multiple << std::endl;
            }
        }
    }
    
    for (long int multiple : multiples_array)
    {
        std::cout << multiple << ", ";
    }

    std::cout << std::endl;

    for (int l = 0; l < multiples_array.size(); l++)
    {
        bool isPresent {false};
        for ( int const thisLevel : total_level_array)
        {
            if (thisLevel == multiples_array[l])
            {
                isPresent = true;
            }
        }
        if (isPresent == false)
        {
            total_level_array.push_back(multiples_array[l]);
        }
    }

    for (int const thisLevel : total_level_array)
    {
        std::cout << thisLevel << ", ";
    }
    

    std::cout << std::endl;

    long int exp_win {};
    
    for (long int value : total_level_array)
    {
        exp_win += value;
    }
    
    std::cout << "Vous avez : " << exp_win << " exp" << std::endl;
    
}