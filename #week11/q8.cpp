#include <iostream>
using namespace std;

int main()
{
    int a[100], n, target;
    int low, high, mid, found = -1;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    low = 0;
    high = n - 1;

    // Binary Search
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == target)
        {
            found = mid;
            break;
        }
        else if (a[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found != -1)
    {
        cout << "Element found at index: " << found;
    }
    else
    {
        cout << "Element not found.";
    }

    return 0;
}

