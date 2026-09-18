#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
     
    int *p1 = &a;
    int *p2 = &b;

    int  p3 = *p1;
    *p1 = *p2;
    *p2 = p3;

    cout << "After swapping:  a = " << a << ", b = " << b << endl;

   
}
