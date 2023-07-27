#include <iostream>

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
    int size_of_array = sizeof(food) / sizeof(std::string);

    std::string search_word;
    std::cout << "Enter element to search for: \n";
    std::getline (std::cin, search_word);

    int index = search_array(food, size_of_array, search_word);
    if (index == -1){
        std::cout << "The Food was not found.";
    }else{
        std::cout << "The index is: " << index <<  "\n";
    }
    

    return 0;
}