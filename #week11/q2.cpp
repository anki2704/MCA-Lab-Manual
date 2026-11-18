#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    int choice;

    cout << "===== ARITHMETIC OPERATIONS =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (choice)
    {
        case 1:
            result = num1 + num2;
            cout << "\nAddition = " << result;
            break;

        case 2:
            result = num1 - num2;
            cout << "\nSubtraction = " << result;
            break;

        case 3:
            result = num1 * num2;
            cout << "\nMultiplication = " << result;
            break;

        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "\nDivision = " << result;
            }
            else
            {
                cout << "\nError! Division by zero is not possible.";
            }
            break;

        default:
            cout << "\nInvalid choice! Please select between 1 and 4.";
    }

    return 0;
}
