#include <iostream>
using namespace std;

int count = 0;

void towerOfHanoi(int n, char start, char mid, char end)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << start<< " to " << end << endl;

        count++;
        return;
    }

    towerOfHanoi(n - 1, start, end, mid);

    cout << "Move disk " << n << " from "<< start << " to " << end << endl;

    count++;

    towerOfHanoi(n - 1, mid, start, end);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    if (n <= 0){
        cout << "Enter a positive number.";
        return 0;
    }

    towerOfHanoi(n, 'A', 'B', 'C');
    cout << endl;

    cout << "Total number of moves: " << count << endl;

    return 0;
}

