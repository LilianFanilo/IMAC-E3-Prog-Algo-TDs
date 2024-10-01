#include <iostream>
#include <vector>

int main ()
{
    int level_stage {};
    int ennemies {};
    int level_ennemies {};
    std::vector<int> vector {};

    int total_energy {};

    std::cout << "Saisissez le niveau terminé :" << std::endl;
    std::cin >> level_stage ;

    std::cout << "Saisissez le nombre d'ennemis vaincus :" << std::endl;
    std::cin >> ennemies ;

    std::cout << "Saisissez le niveau des ennemis vaincus :" << std::endl;

    for (int i = 0; i < level_stage; i++)
    {
        if (i % level_ennemies == 0)
        {
            vector.push_back(i);
        }
    }

    for (int const value : vector)
    {
        total_energy += value;
    }
    
    std::cout << "Exp obtenu :" << total_energy << std::endl;
    

}