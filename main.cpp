#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include "header.h"

template <typename T>
MinMaxResult<T> find_min_max(T* arr, int size) {
    MinMaxResult<T> result;
    if (size <= 0) {
        result.min_value = T(); 
        result.max_value = T(); 
        result.min_index = -1;
        result.max_index = -1;
    }
    else {
        result.min_value = arr[0];
        result.max_value = arr[0];
        result.min_index = 0;
        result.max_index = 0;

        for (int i = 1; i < size; ++i) {
            if (arr[i] < result.min_value) {
                result.min_value = arr[i];
                result.min_index = i;
            }
            if (arr[i] > result.max_value) {
                result.max_value = arr[i];
                result.max_index = i;
            }
        }
    }

    return result;
}

int main() {
    const int size = 10;  
    int* arr = new int[size];

   
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100; 
    }

    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    MinMaxResult<int> result = find_min_max(arr, size);

    std::cout << "Minimum value: " << result.min_value << " at index " << result.min_index << std::endl;
    std::cout << "Maximum value: " << result.max_value << " at index " << result.max_index << std::endl;

    // Не забудьте звільнити виділену пам'ять
    delete[] arr;

    return 0;
}





