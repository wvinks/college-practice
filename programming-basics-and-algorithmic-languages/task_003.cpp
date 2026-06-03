#include <iostream>
#include <string>

void reverseString(const std::string& str) {
    int i = str.length() - 1;

    while (i >= 0) {
        std::cout << str[i];
        i--;
    }
}

int main() {
    std::cout << "Enter a line: ";
    std::string text;
    std::getline(std::cin, text);

    reverseString(text);
    std::cout << std::endl;

    return 0;
}
