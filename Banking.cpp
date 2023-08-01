#include <iostream>
#include <iomanip>

void BankingList(){
    std::cout << "1. Show balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
}
void ShowBalance(double balance){
    std::cout << "Your balance is: " << std::fixed << std::setprecision(2) << balance << " $\n";
}
double Deposit(){
    double deposit;
    do
    {
        std::cout << "Enter the deposit amount: ";
        std::cin >> deposit;
    } while (deposit < 0);
    return deposit;
}
double Withdraw(double balance){
    double withdraw;
    do
    {
        std::cout << "Enter the withdrawal amount: ";
        std::cin >> withdraw;
    } while (withdraw < 0 || withdraw > balance);
    return withdraw;
}

int main(){
    double balance = 323;

    int choice;
    do
    {
        std::cout << "\nEnter yoru choice: \n";
        BankingList();
        std::cin >> choice;
        
        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1: ShowBalance(balance);
            break;
        case 2: ShowBalance(balance);
            balance += Deposit();
            ShowBalance(balance);
            break;
        case 3: ShowBalance(balance);
            balance -= Withdraw(balance);
            ShowBalance(balance);
            break;
        case 4: std::cout << "Thanks for visiting!\n";
            break;
        
        default: std::cout << "Invalid choice!\n";
            break;
        }
    } while (choice != 4);
    

    return 0;
}