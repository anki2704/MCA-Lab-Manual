
#include <iostream>
using namespace std;

class Calculator
{
private:
    int a, b, c, d;

public:

    // Default Constructor
    Calculator()
    {
        a = 10;
        b = 20;
        c = 30;
        d = 40;
    }

    // Parameterized Constructor
    Calculator(int x, int y, int z, int w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }

    // Function to perform arithmetic operations
    void calculate()
    {
        cout << "Addition: " << a + b + c + d << endl;
        cout << "Subtraction: " << a - b - c - d << endl;
        cout << "Multiplication: " << a * b * c * d << endl;

        if (b != 0)
            cout << "Division (a / b): " << (float)a / b << endl;
        else
            cout << "Division not possible." << endl;
    }
};

int main()
{
    Calculator obj1;
    Calculator obj2(20, 10, 5, 2);

    cout << "Using Default Constructor:" << endl;
    obj1.calculate();

    cout << "\nUsing Parameterized Constructor:" << endl;
    obj2.calculate();

    return 0;
}

