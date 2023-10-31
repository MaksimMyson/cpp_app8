#include <iostream>
using namespace std;

template <typename T>
struct MinMaxResult {
    T min_value;
    T max_value;
    int min_index;
    int max_index;
};

template <typename T>
MinMaxResult<T> find_min_max(T* arr, int size);