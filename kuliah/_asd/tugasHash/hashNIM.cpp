#include <iostream>
#include <string>

using namespace std;

// hash table
struct HashTable {
    string username, password, nim;
};

HashTable Akun[26];

// hash function
int HashFunction(string key) { return stoi(key) % 29 - 1; }

// cek akun
bool cek(string username, string password, string nim) {
    int index = HashFunction(nim);

    if (Akun[index].nim != "") {
        cout << "NIM sudah dipakai!" << endl;
        return false;
    } else {
        Akun[index].username = username;
        Akun[index].password = password;
        Akun[index].nim = nim;
        return true;
    }
}

void cetakAkun() {
    cout << "Data akun" << endl;
    cout << "| Index\t - Username - Password - NIM |" << endl;
    for (int i = 0; i < 26; i++) {
        cout << "| " << i << "\t - " << Akun[i].username << " - "
             << Akun[i].password << " - " << Akun[i].nim << " |" << endl;
    }
}

int main() {
    // string nim = "2107411025";
    // HashFunction(nim);
    // string hello = "Hello", world = "World";
    // cout << hello.length() << endl;
    // cout << hello + world << endl;
    // cout << hello + world << endl;

    // cout << password << endl;
    // cout << hurufPertama << endl;
    // cout << putchar(tolower(hurufPertama)) << endl;
    // cout << tolower(hurufPertama) - 97 << endl;

    // cout << HashFunction(password) << endl;

    while (true) {
        string username, password, nim;
        cout << "Silahkan login" << endl;
        cout << "Masukkan username: ";
        cin >> username;
        cout << "Masukkan password: ";
        cin >> password;
        cout << "Masukkan NIM: ";
        cin >> nim;

        cout << "Username: " << username << ", password: " << password
             << ", NIM: " << nim << endl;

        if (cek(username, password, nim)) {
            cout << "Akun berhasil didaftarkan!" << endl;
            cout << endl;
        } else {
            cout << "Akun gagal didaftarkan!" << endl;
            cout << endl;
            break;
        }
    }
    cetakAkun();
}