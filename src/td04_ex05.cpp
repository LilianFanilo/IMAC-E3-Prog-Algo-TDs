#include <iostream>
#include <array>

int main()
{
    std::array<int, 10> first_array {};

    std::cout << "Saisir 10 entiers compris entre 0 et 5" << std::endl ;

    for (int i = 0; i < first_array.size(); i++)
    {
        std::cout << "Entier "<< i + 1 << " :" << std::endl ;
        std::cin >> first_array[i]; 
    }

    for (int i = 0; i < first_array.size(); i++)
    {   
        if (first_array[i] == 3)
        {
            for (int j = i; j < first_array.size(); j++)
            {
                if ( first_array[j] != 3)
                {
                    first_array[i] = first_array[j];
                    first_array[j] = 3;   
                    break;
                }
                
            }
            
        }
        

        std::cout << first_array[i] << ", ";
    }

    std::cout << std::endl;

    for (int i = 0; i < first_array.size() ; i++)
    {
       if (first_array[i] == 3)
       {
            first_array[i] = 0;
       }
       
        std::cout << first_array[i] << ", ";
    }
    
    
    
}