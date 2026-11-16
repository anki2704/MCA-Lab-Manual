#include<iostream>
using namespace std;

class Demo
{
    int num;

public:
    Demo* set_data(int n)
    {
        this->num = n;
        return this;
    }

    void display()
    {
        cout << "Number is: " << num << endl;
    }
};

int main()
{
    Demo obj;

    obj.set_data(10)->display();

    return 0;
}

