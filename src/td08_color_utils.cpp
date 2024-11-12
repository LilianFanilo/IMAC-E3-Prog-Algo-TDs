#include "td08_color_utils.hpp"
#include <iostream>

void mix(Color::Rgb color1 , Color::Rgb color2)
{
  int new_red = (color1.red + color2.red) * 0.5;
  int new_green = (color1.green + color2.green) * 0.5;
  int new_blue = (color1.blue + color2.blue) * 0.5;

  std::cout << "Melange : rgb(" << new_red << "," << new_green << "," << new_blue <<")" << std::endl ;

}

void luminance(Color::Rgb color)
{
  float red = color.red / 225.0f;
  float green = color.green / 225.0f;
  float blue = color.blue / 225.0f;

  float luminance =  0.2126f * red + 0.7152f * green + 0.0722f * blue;

  std::cout << "Luminance : " << luminance << std::endl;
}

void invert(Color::Rgb color)
{
  int invert_red = 255 - color.red;
  int invert_green = 255 - color.green;
  int invert_blue = 255 - color.blue;

  std::cout << "Inverse : rgb(" << invert_red << "," << invert_green << "," << invert_blue <<")" << std::endl ;

}

void grayscale(Color::Rgb color)
{
  float red = color.red / 225.0f;
  float green = color.green / 225.0f;
  float blue = color.blue / 225.0f;

  int luminance =  (0.2126f * red + 0.7152f * green + 0.0722f * blue) * 255;

  std::cout << "Niveaux de gris : rgb(" << luminance << "," << luminance << "," << luminance <<")" << std::endl ;
}

int main(){

  Color::Rgb test1 {100,100,100};
  Color::Rgb test2 {200,50,200};

  mix(test1 , test2);
  luminance(test1);
  invert(test1);
  grayscale(test1);

}