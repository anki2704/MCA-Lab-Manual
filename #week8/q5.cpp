#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;

    cout << "Enter string S: ";
    getline(cin, S);

    cout << "Enter string T: ";
    getline(cin, T);

    int pos = S.find(T);//6

    if (pos != -1)
        cout << "Position = " << pos;
    else
        cout << "1";

    return 0;
}

