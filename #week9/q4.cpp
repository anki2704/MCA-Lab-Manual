#include <iostream>
using namespace std;

// Call by Value
void swap_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: " << a << " " << b << endl;
}

// Call by Reference
void swap_reference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    
}

int main()
{
    int x, y, choice;

    cout << "Enter two numbers: "<< endl;
    cin >> x >> y;

    cout << "1. Call by Value"<< endl;
    cout << "2. Call by Reference"<< endl;
    cout << "Enter your choice: "<< endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Before swapping: " << x << " " << y << endl;

            swap_value(x, y);

            cout << "Original values after function call: "
                 << x << " " << y << endl;
            break;

        case 2:
            cout << "Before swapping: " << x << " " << y << endl;

            swap_reference(x, y);

            cout << "After swapping: " << x << " " << y << endl;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

