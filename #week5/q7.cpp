#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];   

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int positive = 0, negative = 0, odd = 0, even = 0;

    for (int i = 0; i < n; i++) {
        // Count of positive and negative
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

        // Count of odd and even
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "----- Results -----" << endl;
    cout << "Positive numbers : " << positive << endl;
    cout << "Negative numbers : " << negative << endl;
    cout << "Even numbers     : " << even << endl;
    cout << "Odd numbers      : " << odd << endl;


}
