#include <iostream>
#include <string>

void sortByLength(std::string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].length() > arr[j + 1].length()) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    std::cout << "Enter number of strings: ";
    std::cin >> n;
    std::cin.ignore();

    std::string* arr = new std::string[n];

    std::cout << "\nEnter strings:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::getline(std::cin, arr[i]);
    }

    sortByLength(arr, n);

    std::cout << "\nSorted strings:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }

    delete[] arr;

    return 0;
}
