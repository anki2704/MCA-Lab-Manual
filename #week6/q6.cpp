#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
   
    cout << "Enter first string: ";
    getline(cin , str1);
    cout << "Enter second string: ";
    getline(cin,str2);
    string *p1 = &str1;
    string *p2 = &str2;
    *p1= *p1+ *p2;
    cout << "Concatenated string: " << *p1 << endl;


}
