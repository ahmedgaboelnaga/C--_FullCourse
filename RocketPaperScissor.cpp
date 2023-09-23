#include <iostream>
#include <cstdlib>
#include <ctime>

void list(){
    std::cout << "Rock_Paper_Scissors Game!\n";
    std::cout << "*************************\n";
    std::cout << "'r' for Rock\n";
    std::cout << "'p' for Paper\n";
    std::cout << "'s' for Scissors\n";
    std::cout << "'c' for close\n";
}
char userchoice(){
    char user_choice;
    do
    {
        list();
        std::cin >> user_choice;
    } while (user_choice != 'r' && user_choice != 's' && user_choice != 'p' && user_choice != 'c');
    return user_choice;
}
char computerchoice(){
    srand(time(NULL));
    int random = rand() % 3 + 1;

    switch (random){
        case 1: return 'r';
        case 2: return 's';
        case 3: return 'p';
    }
}
void showchoice(char choice){
    switch (choice){
        case 'r': std::cout << "Rocket\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
        case 'p': std::cout << "Papers\n";
            break;
    }
}
void Choose_winner(char user, char computer){
    switch (user){
    case 'r': 
    if (computer == 'r'){
        std::cout << "It is a tie!\n";
    } else if (computer == 'p'){
        std::cout << "You lost!\n";
    } else {
        std::cout << "You won";
    }
        break;
    case 'p':
    if (computer == 'p'){
        std::cout << "It is a tie!\n";
    } else if (computer == 'r'){
        std::cout << "You won!\n";
    }else {
        std::cout << "You lost!\n";
    }
        break;
    case 's':
    if (computer == 's'){
        std::cout << "It is a tie!\n";
    } else if (computer == 'p'){
        std::cout << "You won!\n";
    } else {
        std::cout << "You lost!\n";
    }
    }
}

int main() {  
    while (true)
    {
        char player = userchoice();
        if (player != 'c'){
            std::cout << "Your choice is: ";
            showchoice(player);

            char computer = computerchoice();
            std::cout << "The computer choice is: ";
            showchoice(computer);

            Choose_winner(player, computer);
            std::cout << "\n";
        } else {
            std::cout << "Thank you for playing!";
            break;
        }
    }

    return 0;
}