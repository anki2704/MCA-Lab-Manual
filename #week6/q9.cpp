#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;   
    cout << "Enter " << n << " elements: "<< endl;
    for (int i = 0; i < n; i++) {
        cin >> *(ptr)++;   
    }  
    cout << "The elements are:"<< endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

 
}
