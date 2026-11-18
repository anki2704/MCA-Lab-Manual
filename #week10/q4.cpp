#include <iostream>
#include <cstring>
using namespace std;

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[20];
};

int main() {
    Address a;

    cout << "Enter Name: ";
    cin.getline(a.name, 50);
    cout << "Name: " << a.name << endl;

    cout << "\nEnter Home Address: ";
    cin.getline(a.home_address, 100);
    cout << "Home Address: " << a.home_address << endl;

    cout << "\nEnter Hostel Address: ";
    cin.getline(a.hostel_address, 100);
    cout << "Hostel Address: " << a.hostel_address << endl;

    cout << "\nEnter City: ";
    cin.getline(a.city, 50);
    cout << "City: " << a.city << endl;

    cout << "\nEnter State: ";
    cin.getline(a.state, 50);
    cout << "State: " << a.state << endl;

    cout << "\nEnter ZIP Code: ";
    cin.getline(a.zip, 20);
    cout << "ZIP Code: " << a.zip << endl;

    return 0;
}
