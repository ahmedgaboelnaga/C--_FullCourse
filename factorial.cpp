#include <iostream>

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int factorial = 1;
    for (int i = n; i >= 1; i--){
        factorial *= i;
    }

    std::cout << factorial;

    return 0;
}