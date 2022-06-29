#include <iostream>
using namespace std;

// hash table
struct HashTable {
    string username, password;
};

HashTable Akun[26];

// hash function
int HashFunction(string key) {
    char hurufPertama = key[0];
    return tolower(hurufPertama) - 97;
}

// cek akun
bool cek(string username, string password) {
    int index = HashFunction(password);

    if (Akun[index].username != "" && Akun[index].password != "") {
        cout << "User sudah ada!" << endl;
        return false;
    } else {
        Akun[index].username = username;
        Akun[index].password = password;
        return true;
    }
}

void cetakAkun() {
    cout << "Data akun" << endl;
    cout << "| Index\t - Username - Password |" << endl;
    for (int i = 0; i < 26; i++) {
        cout << "| " << i << "\t - " << Akun[i].username << " - "
             << Akun[i].password << " |" << endl;
    }
}

int main() {
    string password = "Aosen123";
    char hurufPertama = password[0];
    cout << password << endl;
    cout << hurufPertama << endl;
    cout << putchar(tolower(hurufPertama)) << endl;
    cout << tolower(hurufPertama) - 97 << endl;

    cout << HashFunction(password) << endl;

    // while (true) {
    //     string username, password;
    //     cout << "Silahkan login" << endl;
    //     cout << "Masukkan username: ";
    //     cin >> username;
    //     cout << "Masukkan password: ";
    //     cin >> password;

    //     cout << "Username: " << username << " & password: " << password << endl;

    //     if (cek(username, password)) {
    //         cout << "Akun berhasil didaftarkan!" << endl;
    //         cout << endl;
    //     } else {
    //         cout << "Akun gagal didaftarkan!" << endl;
    //         cout << endl;
    //         break;
    //     }
    // }
    // cetakAkun();
}