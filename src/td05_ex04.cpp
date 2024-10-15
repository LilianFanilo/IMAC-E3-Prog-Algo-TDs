#include <iostream>
#include <vector>

// Ici j'utilise une référence constante pour éviter de copier toutes les valeurs du vecteur
float average(std::vector<float> const& vec) {
    float sum {0};
    for (float const value : vec) {
        sum += value;
    }
    return sum / static_cast<float>(vec.size());
}

float average(std::vector<int> const& vec) {
    int sum {0};
    for (int const value : vec) {
        sum += value;
    }
    return static_cast<float>(sum) / static_cast<float>(vec.size());
}

int main() {
    std::vector<float> const values {1.2f, 3.4f, 5.6f, 7.8f, 9.0f};
    std::vector<int> const values_int {1, 3, 5, 7, 9};

    std::cout << "Average: " << average(values) << std::endl;
    std::cout << "Average (int): " << average(values_int) << std::endl;
    return 0;
}