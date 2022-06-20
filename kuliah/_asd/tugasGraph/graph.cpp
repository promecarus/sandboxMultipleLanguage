#include <iostream>

using namespace std;

struct Simpul {
    int info;
    Simpul *left, *right;
};

Simpul *P, *first, *last, *Q, *R;
Simpul *points[5];

int main() {
    // pendefinisian adjency matrix bobot ordo 5x5
    int bobot[5][5] = {{0, 5, 0, 2, 0},
                       {6, 0, 3, 0, 0},
                       {0, 0, 0, 0, 9},
                       {0, 0, 12, 0, 7},
                       {0, 14, 0, 0, 0}};
    int NoSimpul[5] = {1, 2, 3, 4, 5};
    int i, j;

    // simpul pertama
    i = 0;
    j = 0;
    P = new Simpul;
    P->info = NoSimpul[i];
    first = P;
    last = P;
    P->left = NULL;
    P->right = NULL;
    points[0] = P;

    cout << "Simpul ke-" << P->info << " alamat: " << points[0] << endl;

    // simpul vertex berikutnya
    for (i = 1; i <= 4; i++) {
        P = new Simpul;
        P->info = NoSimpul[i];
        last->left = P;
        last = last->left;
        P->left = NULL;
        P->right = NULL;
        points[i] = P;

        cout << "Simpul ke-" << P->info << " alamat: " << points[i] << endl;
    }

    // simpul edge untuk semua vertex
    cout << endl;
    Q = first;
    for (i = 0; i <= 4; i++) {
        R = Q;
        cout << "Vertex " << Q->info << endl;
        for (j = 0; j <= 4; j++) {
            if (bobot[i][j] != 0) {
                P = new Simpul;
                P->info = bobot[i][j];
                R->right = P;
                P->left = points[j];
                cout << "berhubungan dengan: " << P->left->info << " bobot "
                     << P->info << endl;
                P->right = NULL;
                R = P;
            }
        }
        cout << endl;
        Q = Q->left;
    }
}