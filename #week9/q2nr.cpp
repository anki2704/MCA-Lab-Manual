//non recursive


#include <iostream>
#include <cmath>
using namespace std;

int count = 0;

void moveDisk(int A[], int &topA, int B[], int &topB,
              char a, char b)
{
    int disk;

    if (topA == 0)
    {
        disk = B[topB--];
        A[++topA] = disk;
        cout << "Move disk " << disk << " from "
             << b << " to " << a << endl;
    }
    else if (topB == 0)
    {
        disk = A[topA--];
        B[++topB] = disk;
        cout << "Move disk " << disk << " from "
             << a << " to " << b << endl;
    }
    else if (A[topA] < B[topB])
    {
        disk = A[topA--];
        B[++topB] = disk;
        cout << "Move disk " << disk << " from "
             << a << " to " << b << endl;
    }
    else
    {
        disk = B[topB--];
        A[++topA] = disk;
        cout << "Move disk " << disk << " from "
             << b << " to " << a << endl;
    }

    count++;
}

void towerOfHanoi(int n)
{
    int A[n + 1], B[n + 1], C[n + 1];

    int topA = n, topB = 0, topC = 0;

    for (int i = 1; i <= n; i++)
        A[i] = n - i + 1;

    int totalMoves = pow(2, n) - 1;

    for (int i = 1; i <= totalMoves; i++)
    {
        if (i % 3 == 1)
            moveDisk(A, topA, C, topC, 'A', 'C');

        else if (i % 3 == 2)
            moveDisk(A, topA, B, topB, 'A', 'B');

        else
            moveDisk(B, topB, C, topC, 'B', 'C');
    }
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Enter a positive number of disks.";
        return 0;
    }

    towerOfHanoi(n);
    cout <<endl;
    cout << "Total number of moves: " << count << endl;

    return 0;
}

