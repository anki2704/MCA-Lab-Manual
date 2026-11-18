
#include <iostream>
using namespace std;

class Demo
{
private:
    int a;
    int b;

public:

    // Default Constructor
    Demo()
    {
        a = 10;
        b = 20;
    }

    // Member function to display values
    void display()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};

int main()
{
    Demo obj;

    obj.display();

    return 0;
}

