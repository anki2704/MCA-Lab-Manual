#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s , oldw, neww;
    cout << " Enter the sentence :"<< endl;
    getline( cin ,s);
    cout << " Enter the old word to replace :"<< endl;
    getline( cin ,oldw);
    cout << " Enter the replacement word  :"<< endl;
    getline( cin ,neww);
    
    int pos = s.find(oldw);
    
    if (pos != -1)
    {
        s.replace(pos, oldw.length(), neww);
        cout << "Updated sentence: " << s;
    }
    else
    {
        cout << "Word not found";
    }

    return 0;
}

