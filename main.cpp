#include <iostream>
#include "header.h"
#include <cstdlib>
#include <ctime>

template <typename T>
MinMaxResult<T> findMinMax(const T arr[], int size) {
    MinMaxResult<T> result;
    if (size == 0) {
        std::cerr << "Empty array" << std::endl;
        result.minValue = result.maxValue = T();
        result.minIndex = result.maxIndex = -1;
        return result;
    }

    result.minValue = result.maxValue = arr[0];
    result.minIndex = result.maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < result.minValue) {
            result.minValue = arr[i];
            result.minIndex = i;
        }
        if (arr[i] > result.maxValue) {
            result.maxValue = arr[i];
            result.maxIndex = i;
        }
    }

    return result;
}

int main() {
    const int size = 10;
    int arr[size];

    srand(static_cast<unsigned>(time(0)));

    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    MinMaxResult<int> result = findMinMax(arr, size);

    std::cout << "Minimum value: " << result.minValue << " at index " << result.minIndex << std::endl;
    std::cout << "Maximum value: " << result.maxValue << " at index " << result.maxIndex << std::endl;

    return 0;
}