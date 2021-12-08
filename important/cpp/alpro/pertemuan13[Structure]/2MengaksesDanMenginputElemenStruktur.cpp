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
    cout<<"nama : ";
    cin>>mhs.name;
    mhs.birthday.day = 15;
    mhs.birthday.month = 4;
    mhs.birthday.year = 1997;
    
    cout << mhs.name << endl;
    cout << mhs.birthday.day << '-';
    cout << mhs.birthday.month << '-';
    cout << mhs.birthday.year << endl;

    system ("pause");
    return 0;
}