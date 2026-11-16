#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int i, int &maxi, int &mini) {
    if (i == n)
        return;

    if (arr[i] > maxi)
        maxi = arr[i];

    if (arr[i] < mini)
        mini = arr[i];

    findMaxMin(arr, n, i + 1, maxi, mini);
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive size.";
        return 0;
    }

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxi = arr[0];
    int mini = arr[0];

    findMaxMin(arr, n, 1, maxi, mini);

    cout << "Maximum element: " << maxi << endl;
    cout << "Minimum element: " << mini << endl;

    return 0;
}

