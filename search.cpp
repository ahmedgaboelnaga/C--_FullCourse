#include <iostream>
#include <string>

int search_array(std::string food[], int size, std::string search_word){
    for (int i = 0; i < size; i++){
        if (food[i] == search_word){
            return i;
        }
    }
    return -1;
}

int main(){
    std::string food[] = {"Pasta", "Meat", "Cheese", "Potatos"};
    int size_of_array = sizeof(food) / sizeof(food[0]);

    std::string search_word;
    std::cout << "Enter element to search for: ";
    std::getline (std::cin, search_word);

    int index = search_array(food, size_of_array, search_word);
    if (index == -1){
        std::cout << "The Food was not found.";
    }else{
        std::cout << "It is the #" << index + 1 << " element!";
    }
    

    return 0;
}