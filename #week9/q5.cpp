#include <iostream>
using namespace std;

void display(int arr[], int n, int i)
{
    if (i == n)
        return;

    cout << arr[i] << " ";

    display(arr, n, i + 1);
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";

    display(arr, n, 0);

    return 0;
}

