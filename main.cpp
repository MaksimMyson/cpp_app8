#include <iostream>
#include "Header.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }

    int max1 = findMax(arr, size);
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Max in one-dimensional array: " << max1 << endl;

    const int rows2 = 2;
    const int cols2 = 3;
    int arr2[rows2][cols2];
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            arr2[i][j] = rand() % 100;
        }
    }
    int max2 = findMax(arr2, rows2, cols2);
    cout << "Two-dimensional array: ";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << arr2[i][j] << " ";
        }
    }
    cout << endl;

    cout << "Max in two-dimensional array: " << max2 << endl;

    const int layers3 = 2;
    const int rows3 = 3;
    const int cols3 = 4;
    int arr3[layers3][rows3][cols3];
    for (int i = 0; i < layers3; i++) {
        for (int j = 0; j < rows3; j++) {
            for (int k = 0; k < cols3; k++) {
                arr3[i][j][k] = rand() % 100;
            }
        }
    }
    int max3 = findMax(arr3, layers3, rows3, cols3);
    cout << "Three-dimensional array: ";
    for (int i = 0; i < layers3; i++) {
        for (int j = 0; j < rows3; j++) {
            for (int k = 0; k < cols3; k++) {
                cout << arr3[i][j][k] << " ";
            }
        }
    }
    cout << endl;

    cout << "Max in three-dimensional array: " << max3 << endl;

    int a = 7;
    int b = 12;
    int max4 = findMax(a, b);
    cout << "Max of two integers: " << max4 << endl;

    int c = 3;
    int max5 = findMax(a, b, c);
    cout << "Max of three integers: " << max5 << endl;

    return 0;
}