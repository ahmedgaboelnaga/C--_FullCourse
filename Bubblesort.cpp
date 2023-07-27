#include <iostream>

void sort(int array[], int size){
    int temporary;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                temporary = array[j];
                array[j] = array[j+1];
                array[j+1] = temporary;
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