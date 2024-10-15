#include <iostream>

int nthFibonacci(int n){

    // Base case: if n is 0 or 1, return n
    if (n <= 1){
        return n;
    }

    // Recursive case: sum of the two preceding Fibonacci numbers
    return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}

int main(){
    int n {};

    std::cout << "Saisir nombre positif: " << std::endl;
    std::cin >> n ;


    int result = nthFibonacci(n);
    std::cout << "Fibonacci: " << result << std::endl;

    return 0;
}