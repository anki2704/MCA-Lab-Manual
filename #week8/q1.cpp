#include <iostream>
#include <string>
using namespace std;

void insertSubstring(string &str, string sub, int pos)
{
    string result = "";

    for (int i = 0; i < pos; i++)
    {
        result += str[i];
    }

    
    for (int i = 0; i < sub.length(); i++)
    {
        result += sub[i];
    }

    
    for (int i = pos; i < str.length(); i++)
    {
        result += str[i];
    }

    str = result;
}

void deleteCharacters(string &str, int pos, int n)
{
    string result = "";

    
    for (int i = 0; i < pos; i++)
    {
        result += str[i];
    }

   
    for (int i = pos + n; i < str.length(); i++)
    {
        result += str[i];
    }

    str = result;
}

int main()
{
    string str, sub;
    int pos, n;

    cout << "Enter main string: ";
    getline(cin, str);

    cout << "Enter substring: ";
    getline(cin, sub);

    cout << "Enter position to insert: ";
    cin >> pos;

    insertSubstring(str, sub, pos);
    cout << "After insertion: " << str << endl;

    cout << "Enter position to delete: ";
    cin >> pos;

    cout << "Enter number of characters to delete: ";
    cin >> n;

    deleteCharacters(str, pos, n);
    cout << "After deletion: " << str << endl;

    return 0;
}

