#include <iostream>

int getDigit(const int number){
    return 0;
}
int sumOddDigits(const std::string cardNumber){

    return 0;
}
int sumEvenDigits(const std::string cardnumber){
    int sum = 0;
    for (int i = cardnumber.size() - 2; i >= 0; i++){
        sum += cardnumber[i];
    }
    return sum;
}

int main(){
    std::string cardNumber;
    std::cout << "Enter the card number: ";
    std::cin >> cardNumber;

    int result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);


    return 0;
}