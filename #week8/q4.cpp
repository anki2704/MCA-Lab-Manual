#include <iostream>
using namespace std;

int main() {
    string s, word;
    int count = 0;

    cout << "Enter the sentence: ";
    getline(cin, s);

    cout << "Enter a word to search: ";
    cin >> word;

   for (int i = 0 ; i<s.length() ; i++){
   	 if (s.substr(i , word.length())== word)
   	  count ++;
   }
    cout << "Total occurrences = " << count;

    return 0;
}
