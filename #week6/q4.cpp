#include <iostream>
using namespace std;

int main() {
    int num;
	cout << "Enter an integer: ";
    cin >> num;
	int *p = &num;

    (*p)--;
    cout << "After decrement: " << *p << endl;

    //++(*p);
    (*p)++;
    cout << "After increment: " << *p << endl;

    
    
 
}
