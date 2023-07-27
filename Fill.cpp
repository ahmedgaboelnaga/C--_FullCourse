#include <iostream>

int main(){
    std::string food[5];
    int size = sizeof(food) / sizeof(food[0]);
    for (int i = 0; i < size; i++){
        std::cout << "Enter the #" << i + 1 << " elemnt: ";
        std::getline(std::cin, food[i]);
    }
    std::cout << "\n\n";
    for (int i = 0; i < size; i++){
        std::cout << "The #" << i + 1 << " elements is: " << food[i] << "\n";
    }

    return 0;
}