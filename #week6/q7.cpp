#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *p =arr;
    cout << "Enter 5 elements: ";
    for(int i = 0; i < 5; i++){
        cin >> *p;
        (p)++;
    }

    p = arr;

    cout << "Array elements are: ";

    for(int i = 0; i < 5; i++)
    {
        cout << *p << " ";
        (p)++;
    }

    return 0;
}
