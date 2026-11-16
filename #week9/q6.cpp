#include <iostream>
using namespace std;

int sumArray(int arr[], int n, int i)
{
    if (i == n)
        return 0;

    return  sumArray(arr, n, i + 1) + arr[i] ;
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Enter a positive size.";
        return 0;
    }

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = sumArray(arr, n, 0);

    cout << "Sum of array elements: " << sum;

    return 0;
}

