#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    int min_calorie {};
    int max_calorie1 {};
    int max_calorie2 {};
    int max_calorie3 {};

    size_t const dwarf_count { 20 };

    std::vector<int> calories {};

    // std::srand permet de fixer la "seed" du générateur aléatoire (pour avoir des résultats reproductibles)
    std::srand(42);
    
    for (int i = 0; i < dwarf_count; ++i)
    {
      calories.push_back(rand() % 24000 + 100);
    }

    // affichage optionnel des calories transportées par chaque nain
    // for (int const c : calories)
    // {
    //   std::cout << c << ", ";
    // }
    // std::cout << std::endl;

    // TODO: afficher la quantité de provisions la plus grande transportée par un nain
    for (int const value : calories)
    {
        
     if (value > max_calorie1)
     {
        max_calorie1 = value;
     }

     if (value > max_calorie2 && value < max_calorie1)
     {
        max_calorie2 = value;
     }

     if (value > max_calorie3 && value < max_calorie2)
     {
        max_calorie3 = value;
     }

     if (min_calorie == 0) 
     {
        min_calorie = value;
     }

     if (value < min_calorie && min_calorie != 0)
     {
        min_calorie = value;
     }
        
    }
    
    std::cout << "la quantite de provisions la plus grande 1 est " << max_calorie1 << std::endl;
    std::cout << "la quantite de provisions la plus grande 2 est " << max_calorie2 << std::endl;
    std::cout << "la quantite de provisions la plus grande 3 est " << max_calorie3 << std::endl;
    std::cout << "la somme des provisions les plus grandes est " << max_calorie1 + max_calorie2 + max_calorie3 << std::endl;
    std::cout << "la quantite de provisions la plus petite est " << min_calorie << std::endl;

    return 0;
}