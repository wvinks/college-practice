#include <iostream>
#include <string>

int countElements(const std::string& str) {
    int count = 0;

    for (char c : str) {
        if (c == ':') {
            count++;
        }
    }

    return count;
}

int main() {
    std::cout << "Enter a line: ";
    std::string text;

    std::getline(std::cin, text);

    std::cout << "Amount of elements: " << countElements(text);
    std::cout << std::endl;

    return 0;
}
