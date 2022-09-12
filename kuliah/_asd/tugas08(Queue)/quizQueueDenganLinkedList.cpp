#include <iostream>
using namespace std;

int countOrder = 0, totalPemasukan = 0;
// deklarasi queue dengan linked list
struct antrianOrder {
    int idOrder, jumlahOrder, hargaPerOrder;
    string namaMenu;

    antrianOrder *next;
};

int maks = 5;
antrianOrder *head, *tail, *nodeBaru, *cur, *del;

// count
int count() {
    if (head == NULL) {
        return 0;
    } else {
        int jumlah = 0;
        cur = head;
        while (cur != NULL) {
            jumlah++;
            cur = cur->next;
        }
        return jumlah;
    }
}

// is full
bool isFull() { return (count() == maks); }

// is empty
bool isEmpty() { return (count() == 0); }

// enqueue
void enqueue(string namaMenu, int jumlahOrder, int hargaPerOrder) {
    if (isFull()) {
        cout << "Antrian penuh!" << endl;
    } else {
        countOrder++;
        if (isEmpty()) {
            head = new antrianOrder;
            head->idOrder = countOrder;
            head->namaMenu = namaMenu;
            head->jumlahOrder = jumlahOrder;
            head->hargaPerOrder = hargaPerOrder;
            head->next = NULL;
            tail = head;
            totalPemasukan += countOrder * hargaPerOrder;
        } else {
            nodeBaru = new antrianOrder;
            nodeBaru->idOrder = countOrder;
            nodeBaru->namaMenu = namaMenu;
            nodeBaru->jumlahOrder = jumlahOrder;
            nodeBaru->hargaPerOrder = hargaPerOrder;
            nodeBaru->next = NULL;
            tail->next = nodeBaru;
            tail = nodeBaru;
            totalPemasukan += countOrder * hargaPerOrder;
        }
    }
}

// display
void display() {
    if (isEmpty()) {
        cout << "Antrian kosong!\n";
    } else {
        cout << "Data Antrian Order\n";
        cur = head;
        while (cur != NULL) {
            cout << "No. Order " << cur->idOrder << " - " << cur->namaMenu
                 << ", sebanyak " << cur->jumlahOrder << ", dengan harga Rp"
                 << cur->hargaPerOrder << ". Total: Rp"
                 << cur->jumlahOrder * cur->hargaPerOrder << endl;
            cur = cur->next;
        }
    }
    cout << "\nJumlah Antrian Sekarang: " << count() << endl;
    cout << "\nTotal Order\t: " << countOrder << endl;
    cout << "Total Pemasukan\t: Rp" << totalPemasukan << endl;
    cout << "------------------------------------------------------------------"
            "---------\n";
}

// dequeue
void dequeue() {
    if (isEmpty()) {
        cout << "Antrian kosong!\n";
    } else {
        del = head;
        head = head->next;
        del->next = NULL;
        delete del;
    }
}

// destroy
void destroy() {
    if (isEmpty()) {
        cout << "Antrian kosong!\n";
    } else {
        cur = head;
        while (cur != NULL) {
            del = cur;
            cur = cur->next;
            del->next = NULL;
            delete del;
        }
        head = NULL;
        tail = NULL;
    }
}

int main() {
    enqueue("Nasi Goreng", 1, 12000);
    enqueue("Nasi Uduk", 8, 17000);
    enqueue("Nasi Lemak", 6, 11000);
    enqueue("Nasi Panggang", 1, 11000);
    enqueue("Nasi Bakar", 4, 12000);
    display();

    dequeue();
    display();

    destroy();
    display();
}