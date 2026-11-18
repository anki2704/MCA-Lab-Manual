#include <iostream>
#include <string>
using namespace std;

struct DOB {
    int day;
    int month;
    int year;
};

struct Person {
    string name;
    DOB date;   //nested
};

int main() {
    Person p;

    cout << "Enter your name: ";
    getline(cin, p.name);

    cout << "Enter your date of birth:\n";

    cout << "Day: ";
    cin >> p.date.day;

    cout << "Month: ";
    cin >> p.date.month;

    cout << "Year: ";
    cin >> p.date.year;

    cout << "\nYour Details:\n";
    cout << "Name: " << p.name << endl;

    cout << "Date of Birth: "
         << p.date.day << "/"
         << p.date.month << "/"
         << p.date.year << endl;

    return 0;
}

