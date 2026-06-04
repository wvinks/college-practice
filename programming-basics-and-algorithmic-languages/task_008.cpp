#include <iostream>
#include <string>

bool checkPassword(const std::string& password) {
    return password == "v4067";
}

int main() {
    const int maxAttempts = 3;
    int attempts = 0;
    std::string password;

    while (attempts < maxAttempts) {
        std::cout << "\nEnter password: ";
        std::getline(std::cin, password);

        if (checkPassword(password)) {
            std::cout << "Access granted!" << std::endl;
            return 0;
        }

        attempts++;
        std::cout << "Wrong password. Attempts left: " << maxAttempts - attempts << std::endl;
    }

    std::cout << "Access blocked!" << std::endl;

    return 0;
}
