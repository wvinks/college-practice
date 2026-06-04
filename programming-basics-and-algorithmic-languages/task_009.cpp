#include <iostream>

void deposit(double& balance, double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Balance: " << balance << std::endl;
    } else {
        std::cout << "Invalid amount!" << std::endl;
    }
}

void withdraw(double& balance, double amount, double limit) {
    if (amount <= 0) {
        std::cout << "Invalid amount!" << std::endl;
    }
    else if (amount > limit) {
        std::cout << "Limit exceeded!" << std::endl;
    }
    else if (amount > balance) {
        std::cout << "Insufficient funds!" << std::endl;
    }
    else {
        balance -= amount;
        std::cout << "Balance: " << balance << std::endl;
    }
}

int main() {
    double balance = 10000;
    double limit = 1500;
    int choice;
    double amount;

    do {
        std::cout << "\nChoose the desired action:\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Check balance\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter the desired action: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "\nEnter amount: ";
            std::cin >> amount;
            deposit(balance, amount);
        }
        else if (choice == 2) {
            std::cout << "\nEnter amount: ";
            std::cin >> amount;
            withdraw(balance, amount, limit);
        }
        else if (choice == 3) {
            std::cout << "\nBalance: " << balance << std::endl;
        }
        else if (choice == 0) {
            std::cout << "\nGoodbye!" << std::endl;
        }
        else {
            std::cout << "\nInvalid choice!" << std::endl;
            std::cout << "--------------" << std::endl;
        }

    } while (choice != 0);

    return 0;
}
