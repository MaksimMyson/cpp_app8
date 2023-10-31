#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include "header.h"

template <typename T>
void reverseAndPrint(T arr, int size) {
    for (int i = size - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 10; 
    int arr[size]{};

    
    srand(static_cast<unsigned>(time(0)));

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100; 
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Reversed array: ";
    reverseAndPrint(arr, size);

    return 0;
}