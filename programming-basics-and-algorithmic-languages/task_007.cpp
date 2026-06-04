#include <iostream>
#include <string>

void filterStrings(std::string arr[], int n) {
    for (int i = 0; i < n; i++){
        if (arr[i].length() > 3 ) {
            std::cout << arr[i] << std::endl;
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

    std::cout << "\nStrings longer than 3 characters:" << std::endl;
    filterStrings(arr, n);

    delete[] arr;

    return 0;
}
