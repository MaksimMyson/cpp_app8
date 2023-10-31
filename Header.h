template <typename T>
struct MinMaxResult {
    T minValue;
    int minIndex;
    T maxValue;
    int maxIndex;
};

template <typename T>
MinMaxResult<T> findMinMax(const T arr[], int size);