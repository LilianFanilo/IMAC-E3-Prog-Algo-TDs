#include <iostream>

/*
    Fonction récursive
*/

int fact(int n)
{    
	if( n <= 1 )    
	{        
		return 1;    
	}    
	
	return fact(n-1) * n;
}

/*
    Fonction itérative
*/

int fact_for(int const n){
    int fact = 1;

    // loop calculating factorial
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int number {};
    std::cout << "Entrer un nombre positif inferieur ou egale a 12 :" << std::endl;
    std::cin >> number;

    if (number > 12 || number < 0)
    {
        std::cout << "Erreur: nombre negatif ou superieur a 12" << std::endl;
    } 
    else 
    {
        std::cout << "Fonction recursive: " << fact(number) << std::endl;
        std::cout << "Fonction iterative: " << fact_for(number) << std::endl;
    }
    



}