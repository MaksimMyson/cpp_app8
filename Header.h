#include <iostream>
using namespace std;

void initializeMatrix(int n, int matrix[][3]);
void initializeMatrix(int n, double matrix[][3]);
void initializeMatrix(int n, char matrix[][3]);

void printMatrix(int n, int matrix[][3]);
void printMatrix(int n, double matrix[][3]);
void printMatrix(int n, char matrix[][3]);

void findMinMaxDiagonal(int n, int matrix[][3], int& minVal, int& maxVal);
void findMinMaxDiagonal(int n, double matrix[][3], double& minVal, double& maxVal);
void findMinMaxDiagonal(int n, char matrix[][3], char& minVal, char& maxVal);

void sortRows(int n, int matrix[][3]);
void sortRows(int n, double matrix[][3]);
void sortRows(int n, char matrix[][3]);