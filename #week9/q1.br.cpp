// print the geatest common divisor(GCD) OF two integre (recursive)

#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD = " << gcd(abs(a), abs(b));

    return 0;
}


