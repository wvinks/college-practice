#include <iostream>

int countEven(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    std::cout << "Enter how many numbers: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int count = countEven(arr, n);

    std::cout << "Amount of even numbers: " << count << std::endl;

    delete[] arr;

    return 0;
}
