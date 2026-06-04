#include <iostream>

void enterParking(int& occupied, int capacity) {
    if (occupied < capacity) {
        occupied++;
        std::cout << "\nCar entered the parking." << std::endl;
    } else {
        std::cout << "\nParking is full!" << std::endl;
    }
}

void leaveParking(int& occupied) {
    if (occupied > 0) {
        occupied--;
        std::cout << "\nCar left the parking." << std::endl;
    } else {
        std::cout << "\nParking is empty!" << std::endl;
    }
}

int main() {
    int capacity = 10;
    int occupied = 0;
    int choice;

    do {
        std::cout << "\n1. Enter parking" << std::endl;
        std::cout << "2. Leave parking" << std::endl;
        std::cout << "3. Check occupancy" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Choose action: ";
        std::cin >> choice;

        if (choice == 1) {
            enterParking(occupied, capacity);
        }
        else if (choice == 2) {
            leaveParking(occupied);
        }
        else if (choice == 3) {
            std::cout << "\nOccupied places: " << occupied << std::endl;
            std::cout << "Free places: " << capacity - occupied << std::endl;
        }
        else if (choice == 0) {
            std::cout << "\nGoodbye!" << std::endl;
        }
        else {
            std::cout << "\nInvalid choice!" << std::endl;
        }

    } while (choice != 0);

    return 0;
}
