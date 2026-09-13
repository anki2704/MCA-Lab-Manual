// by using if -else condition


#include <iostream>
using namespace std;
int main(){
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    int ascii = ch;

    if (ascii >= 65 && ascii <= 90)
        cout << "Capital letter";
    else if (ascii >= 97 && ascii <= 122)
        cout << "Small case letter";
    else if (ascii >= 48 && ascii <= 57)
        cout << "Digit";
    else
        cout << "Special symbol";

    return 0;

}

