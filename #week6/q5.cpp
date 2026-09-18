#include <iostream>
#include <string>          
using namespace std;

int main() {
    string str;           
    cout << "Enter a string: ";
    getline (cin ,str);  
    string *ptr = &str;   

    cout << "The string is: ";
    cout <<*ptr<< endl;
//    str[1] = 'o';
//    cout<<str; 

}
