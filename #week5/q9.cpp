#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter " << n << " integers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number to find frequency of: ";
    cin >> num;

    int frqncy= 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            frqncy++;
        }
    }

    cout << "The number " << num << " appears " << frqncy << " time in the list." << endl;

    return 0;
}
