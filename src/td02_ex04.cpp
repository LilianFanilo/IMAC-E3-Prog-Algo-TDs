#include <iostream>

int main(){
    int days {0};

    std::cout << "Donne moi un nombre de jours :" << std::endl;
    std::cin >> days;

    int temp {days};

    int centuries {temp / 36000};
    temp = temp % 36000 ;
    int decades { temp / 3600};
    temp = temp % 3600;
    int years {temp / 360};
    temp = temp % 360;
    int months {temp / 30};
    temp = temp % 30;
    int weeks {temp / 7};
    temp = temp % 7;

    std::cout << days << " jours correspondent a : "<< centuries <<" siecle "<< decades <<" decennies "<< years <<" annee "<< months <<" mois "<< weeks <<" semaine "<< temp <<" jours" << std::endl;

}