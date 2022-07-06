// #include <iomanip>
// #include <iostream>
// #include <string>
// // #include <typeinfo>
// // #include <chrono>
// // #include <thread>
// // #include <array>
// // #include <algorithm>
// // #include <bits/stdc++.h>

// using namespace std;
// // using namespace chrono;
// // using namespace this_thread;

// int main() {
//     int i = 10;
//     int arr[i];

//     for (int i = 0; i < 10; i++) {
//         arr[i] = i;
//         cout << arr[i] << endl;
//     }

//     // system("pause");
//     // return 0;
// }

#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // temporary subarray kiri dan subarray kanan
    int L[n1], R[n2];

    // looping untuk menampung hasil sorting ke array temporary
    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    // proses membandingkan subarray kiri dan subarray kanan
    i = 0;
    j = 0;
    k = m + 1;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // looping untuk mengcopy ulang sisa element dari subarray left ke temp
    // array
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // looping untuk mengcopy ulang sisa element dari subarray right ke temp
    // array
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void show(int A[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    int size;
    cout << "Masukan Banyak Data : ";

    cin >> size;

    int arr[size - 1];

    for (int i = 0; i < size; i++) {
        cout << "Masukan Data Array Ke " << i << " :";
        cin >> arr[i];
    }

    mergeSort(arr, 0, size);

    cout << "Hasil : ";
    show(arr, size);
    return 0;
}