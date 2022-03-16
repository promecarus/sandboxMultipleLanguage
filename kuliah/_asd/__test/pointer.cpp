#include <iostream>
#include <string>
#include <array>

using namespace std;

// *  content of
// &  address of
// * dereference

int main() {
    // unsigned long long int i, *ptr, **ptrPtr, ***ptrPtrPtr, ****ptrPtrPtrPtr;
    // ptr = &i;
    // ptrPtr = &ptr;
    // ptrPtrPtr = &ptrPtr;
    // ptrPtrPtrPtr = &ptrPtrPtr;
    // // i = 1;
    // // *ptr = 10;
    // // **ptrPtr = 100;
    // // ***ptrPtrPtr = 1000;
    // ****ptrPtrPtrPtr = 10000;

    // cout << "i = " << i << endl;
    // cout << "ptr = " << ptr << endl;
    // cout << "ptrPtr = " << ptrPtr << endl;
    // cout << "ptrPtrPtr = " << ptrPtrPtr << endl;
    // cout << "ptrPtrPtrPtr = " << ptrPtrPtrPtr << endl;
    // cout << "\n";
    // cout << "i = " << i << endl;
    // cout << "*ptr = " << *ptr << endl;
    // cout << "**ptrPtr = " << **ptrPtr << endl;
    // cout << "***ptrPtrPtr = " << ***ptrPtrPtr << endl;
    // cout << "****ptrPtrPtrPtr = " << ****ptrPtrPtrPtr << endl;
    // cout << "\n";
    // cout << "&i = " << &i << endl;
    // cout << "&ptr = " << &ptr << endl;
    // cout << "&ptrPtr = " << &ptrPtr << endl;
    // cout << "&ptrPtrPtr = " << &ptrPtrPtr << endl;
    // cout << "&ptrPtrPtrPtr = " << &ptrPtrPtrPtr << endl;

    // int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout << "&A = " << &A << endl;
    // for (int i = 0; i < 10; i++) {
    //     cout << "Nilai A[" << i << "] = " << *(A+i) << " dengan alamat " << &A[i] << endl;
    //     cout << "Nilai A[" << i << "] = " << A[i]   << " dengan alamat " << &A[i] << endl;
    // }
    // (A[0] == 1) ? cout << "sama" << "\n" : cout << "beda" << "\n";
    int n;
    cin >> n;
    int Z[n];
    for (int i = 0; i < n; i++) {
        Z[i] = i;
        cout << "Z[" << i << "] = " << Z[i] << endl;
    }
    
    return 0;
}
