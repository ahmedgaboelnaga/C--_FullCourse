#include <iostream>

template <typename T>
void swap(T &x, T &y){
    T temporary = x;
    x = y;
    y = temporary;
}

template <typename T>
void sort(T array[], int size){
    int temporary;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main(){
    int numbers[] = {5, 2, 9, 10, 3, 4, 8, 7, 1, 6};
    int size = sizeof(numbers) / sizeof(int);
    for (int numbers: numbers){
        std::cout << numbers << " ";
    }
    sort(numbers, size);
    std::cout << "\n\nThe sorted version of the array\n";
    for (int numbers: numbers){
        std::cout << numbers << " ";
    }

    return 0;
}