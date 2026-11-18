
#include <iostream>
using namespace std;

class Demo
{
    static int created;
    static int destroyed;

public:

    // Constructor
    Demo()
    {
        created++;
        cout << "Object created. Total objects: "
             << created << endl;
    }

    // Destructor
    ~Demo()
    {
        destroyed++;
        cout << "Object destroyed. Total destroyed: "
             << destroyed << endl;
    }

    // Static function to display counts
    static void display()
    {
        cout << "\nTotal objects created: " << created << endl;
        cout << "Total objects destroyed: " << destroyed << endl;
    }
};

// Initialize static data members
int Demo::created = 0;
int Demo::destroyed = 0;

int main()
{
    cout << "Entering first block:" << endl;
    {
        Demo obj1, obj2;
    }

    cout << "\nEntering second block:" << endl;
    {
        Demo obj3;
        Demo obj4;
    }

    cout << "\nFinal Object Count:" << endl;
    Demo::display();

    return 0;
}

