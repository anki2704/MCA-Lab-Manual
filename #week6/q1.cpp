#include <iostream>
using namespace std;

int main() {
    int a,b;
    int *p1 = &a;
    int *p2 = &b;
    cout << "enter first number :"<< endl;
    cin>> *p1;
    cout << "enter second number :"<< endl;
    cin>> *p2;
    int sum = *p1 + *p2;
    cout << "Additon : "<< sum <<  endl ;

}
