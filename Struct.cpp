#include <iostream>

struct id
{
    std::string name;
    std::string phone_number;
};

int main(){
    int size;
    std::cout << "Enter the size: ";
    std::cin >> size;

    id *person = new id[size];

    for (int i = 0; i < size; i++){
        std::cout << "Enter the #" << i + 1 << " person's data: ";
        std::cin >> person[i].name;
        std::cout << "Phone number: ";
        std::cin >> person[i].phone_number;
    }

    for (int i = 0; i < size; i++){
    std::cout << "The #" << i + 1 << " person's name: " << person[i].name << " ,phone: " << person[i].phone_number << std::endl;
    }

    delete[] person;
    return 0;
}