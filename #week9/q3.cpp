#include <iostream>
using namespace std;
void transpose(int a[10][10], int r, int c)
{   
    cout << "Transpose of Matrix:" << endl;

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[10][10], r, c;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << "Enter matrix elements:"<< endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<< endl;
    cout << "Original Matrix: "<< endl;;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    transpose(a, r, c);

    return 0;
}

