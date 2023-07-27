#include <iostream>
int main(){
    int *pointer = nullptr;
    int x = 123;
    // pointer = &x;

    if (pointer == nullptr){
        std::cout << "address was not assigned";
    }else {
        std::cout << "It was assigned";
    }
    // std::cout << *pointer;
    return 0;
}