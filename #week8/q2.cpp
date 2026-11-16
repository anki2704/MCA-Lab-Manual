#include <iostream>
#include <string>
using namespace std;

int main()
{   int i = 0, j;
    string str;
    cout << "Enter a string: ";
    cin >> str;

    j = str.length() - 1;

    while (i < j)
    {
        if (str[i] != str[j])
            break;
        i++;
        j--;
    }

  

    if (i>=j)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
