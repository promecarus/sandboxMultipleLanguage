#include <iostream>

using namespace std;

void menampilkanMatriks4x4(int matriks[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriks[i][j] << "\t";
        } cout << "\n";
    }
}

int main() {
    // Penentuan isi matriks pertama dan kedua
    int matriks1[4][4] = {
        {3, 4, 5, 5},
        {5, 6, 7, 9},
        {1, 7, 11, 10},
        {2, 8, 9, 4}
    }, matriks2[4][4] = {
        {1, 2, 3, 4},
        {8, 7, 6, 5},
        {9, 10, 11, 2},
        {6, 5, 4, 3}
    };
        
    // Proses output matriks pertama dan kedua
    cout << "\nMatriks pertama:\n";
    menampilkanMatriks4x4(matriks1);
    cout << "\nMatriks kedua:\n";
    menampilkanMatriks4x4(matriks2);

    // Proses perkalian dan output matriks hasil perkalian
    cout << "\nMatriks hasil perkalian:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int temp = 0;
            for (int k = 0; k < 4; k++) {
                temp += matriks1[i][k] * matriks2[k][j];
            }
            cout << temp << "\t";
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}