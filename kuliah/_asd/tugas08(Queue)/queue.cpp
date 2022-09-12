#include <iostream>

using namespace std;

// deklarasi queue
const int maksimal = 5;
int front = 0, back = 0;
string antrianOrder[maksimal];

// is full
bool isFull() { return (back == maksimal); }

// is empty
bool isEmpty() { return (back == 0); }

// enqueue
void enqueue(string data) {
    if (isFull()) {
        cout << "Antrian penuh!"
             << "\n";
    } else {
        antrianOrder[back] = data;
        back++;
    }
}

// dequeue
void dequeue() {
    if (isEmpty()) {
        cout << "Antrian kosong!"
             << "\n";
    } else {
        for (int i = 0; i < maksimal - 1; i++) {
            antrianOrder[i] = antrianOrder[i + 1];
        }
        antrianOrder[back - 1] = "---";
        back--;
    }
}

// count
int count() { return back; }

// display
void display() {
    if (isEmpty()) {
        cout << "Antrian kosong!"
             << "\n";
    } else {
        cout << "Data Antrian Order\n";
        for (int i = 0; i < maksimal; i++) {
            cout << "antrian ke-" << i + 1 << ": " << antrianOrder[i] << "\n";
        }
    }
    cout << "Jumlah antrian: " << count() << "\n";
    cout << "========================================================\n";
}
// destroy
void destroy() {
    if (isEmpty()) {
        cout << "Antrian kosong!"
             << "\n";
    } else {
        for (int i = 0; i < maksimal; i++) {
            antrianOrder[i] = "";
            front = 0;
            back = front;
        }
    }
}

int main() {
    enqueue("Paket Hemat 1");
    display();

    enqueue("Nasi Goreng Spesial");
    enqueue("Paket Hemat 3");
    enqueue("Mie Goreng Seafood");
    enqueue("Paket Ramadan 1");
    display();

    destroy();
    display();
}