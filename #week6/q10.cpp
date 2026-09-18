#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    char *start = &str[0];
    char *end = &str[0] + str.length() - 1;

    for (; start < end; start++) {
        char temp = *start;
        *start = *end;
        *end = temp;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    
}
