#include <iostream>

enum class Article { Alimentation, Vetements, Chaussures, Autre };

std::istream& operator>>(std::istream& is, Article& article)
{
    std::string articleAsString;
    is >> articleAsString;

    if (articleAsString == "Alimentation") {
        article = Article::Alimentation;
    } else if (articleAsString == "Vetements") {
        article = Article::Vetements;
    } else if (articleAsString == "Chaussures") {
        article = Article::Chaussures;
    } else if (articleAsString == "Autre") {
        article = Article::Autre;
    } else {
        is.setstate(std::ios::failbit);
    }

    return is;
}

int main()
{
    Article article;
    float price;
    float price_reduction;
    float promotion;
    int age;
    bool fidelityCard;


    std::cout << "Saisissez le type d'article :" << std::endl ;
    std::cin >> article;

    // On vérifie si la saisie a échoué.
    if (std::cin.fail()) {
        std::cout << "Erreur de saisie, il faut saisir un type d'article valide (\"Alimentation\", \"Vetements\", \"Chaussures\" ou \"Autre\")" << std::endl;

        std::cin.clear(); // On remet std::cin dans un état fonctionnel.
        std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.

        // le programme s'arrête si on a rencontré une erreur de saisie et renvoie 1 pour indiquer une erreur.
        return 1;
    }

    std::cout << "Saisissez le prix de l'article :" << std::endl ;
    std::cin >> price;
    std::cout << "Avez-vous une carte de fidelite ? (true(1)/false(0))" << std::endl ;
    std::cin >> fidelityCard;
    std::cout << "Saisissez votre age :" << std::endl ;
    std::cin >> age;

    if (price < 0 || age < 0){
        std::cout << "Erreur: l'age ou le prix est négatif" << std::endl;
        return 1;
    }

    if (article == Article::Alimentation) {
        std::cout << "Vous avez saisi un article de type Alimentation" << std::endl;

        if (fidelityCard)
        {
            price_reduction = price * 0.92f;
        }
        else
        {
            price_reduction = price * 0.95f;
        }
        
    } else if (article == Article::Vetements) {
        std::cout << "Vous avez saisi un article de type Vetements" << std::endl;

        if (fidelityCard)
        {
            price_reduction = price * 0.85f;
        }
        else
        {
            price_reduction = price * 0.90f;
        }

    } else if (article == Article::Chaussures) {
        std::cout << "Vous avez saisi un article de type Chaussures" << std::endl;

        if (fidelityCard)
        {
            price_reduction = price * 0.82f;
        }
        else
        {
            price_reduction = price * 0.88f;
        }

    } else if (article == Article::Autre) {
        std::cout << "Vous avez saisi un article de type Autre" << std::endl;
    }
    
    if (age < 26)
    {
        price_reduction = price_reduction * 0.9f;
    }

    promotion = price_reduction * 0.10f;
    if (promotion > 30)
    {
        promotion = 30;
    }
    
    
    std::cout << "Votre article coutant " << price << " est maintenant a " << price_reduction << std::endl;
    std::cout << "Vous avez un bon d'achat de " << promotion << std::endl;
    return 0;
}