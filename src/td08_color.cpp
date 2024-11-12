#include <iostream>
#include "td08_color.hpp"

void Color::Rgb::Display(){
    std::cout << "rgb(" << red << "," << green << "," << blue <<")" << std::endl ;
}

int main()
{
    Color::Rgb test = {100,200,50};
    test.Color::Rgb::Display();
    
}