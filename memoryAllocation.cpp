#include <iostream>

int main(){
    int *x = new int;
    *x = 5;
    std::cout << *x;

    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *students = new int[size];
    for (int i = 0; i < size; i++){
        std::cout << "Enter the #" << i + 1 << " number: ";
        std::cin >> students[i];
    }
    std::cout << "\n";
    for (int i = 0; i < size; i++){
        std::cout << "The #" << i + 1 << " number is: " << students[i] << "\n";
    }

    delete x;
    delete[] students;
    return 0;
}