#include <iostream>

int main(){
    int rows;
    std::cout << "How many rows you want to print: ";
    std::cin >> rows;

    int columns;
    std::cout << "How many columns do you want to pritn: ";
    std::cin >> columns;

    char symbol;
    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cout << symbol;
        }
        std::cout << std::endl;
    }

    return 0;
}