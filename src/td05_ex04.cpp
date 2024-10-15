#include <iostream>
#include <vector>

void table_number(std::vector<int> const& numbers){
    int moyenne {};
    for (int number : numbers)
    {
        moyenne += number;
    }
    std::cout << moyenne << std::endl;
}

void table_number(std::vector<float> const& numbers){
    float moyenne {};
    for (float number : numbers)
    {
        moyenne += number;
    }
    
    std::cout << moyenne << std::endl;
}

int main()
{
    std::vector testInt {1,5,9,6};
    std::vector testFloat {9.2f, 5.3f, 9.7f, 6.0f};

    table_number(testInt);
    table_number(testFloat);

    return 0;
}