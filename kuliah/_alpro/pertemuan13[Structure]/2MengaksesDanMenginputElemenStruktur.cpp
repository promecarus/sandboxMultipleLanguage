#include <iostream>
using namespace std;

struct date {
    int day;
    int month;
    int year;
};

struct student{
    char name[30];
    struct date birthday;
};

//deklarasi var mhs bertipe struct
student mhs;

int main(){
    cout << "Nama : ";
    cin >> mhs.name;
    mhs.birthday.day = 18;
    mhs.birthday.month = 11;
    mhs.birthday.year = 2002;
    
    cout << mhs.name << endl;
    cout << mhs.birthday.day << '-';
    cout << mhs.birthday.month << '-';
    cout << mhs.birthday.year << endl;

    system ("pause");
    return 0;
}
