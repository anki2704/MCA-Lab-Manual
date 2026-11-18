#include <iostream>
using namespace std;

int main()
{
    char name[50], branch[50], year[30];
    cout << "Enter your name: ";
    cin.getline(name, 50);
    cout << "Enter your branch: ";
    cin.getline(branch, 50);
    cout << "Enter your academic year: ";
    cin.getline(year, 30);
    cout << "STUDENT INFORMATION" << endl;
    cout << "Name           : " << name << endl;
    cout << "Branch         : " << branch << endl;
    cout << "Academic Year  : " << year << endl;

    return 0;
}
