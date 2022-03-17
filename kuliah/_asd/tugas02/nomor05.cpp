#include <iostream>

using namespace std;

void printArrayValue(int arr[3][4], int row, int col) {
    cout << arr[row][col] << "\n";
}

int main() {
    int A[3][4] = {1, 3, 2, 4, 5, 7, 6, 8, 9, 11, 12},
        B[3][4] = {
        {1, 2},
        {3, 4, 5},
        {7}
    };
    printArrayValue(A, 1, 1);
    printArrayValue(B, 2, 2);
    printArrayValue(A, 2, 3);
    printArrayValue(B, 0, 1);
    printArrayValue(A, 0, 2);

    system("pause");
    return 0;
}