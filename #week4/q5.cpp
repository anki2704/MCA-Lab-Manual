
#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cout << "Enter the last term : " << endl;
        cin >> n;

        if (n <=1){
        cout << "Invalid Number;"<< endl;
        break;}

        cout << "Prime numbers between 2 and " << n << " are:" << endl;

        for (int i = 2; i <= n; i++) {
            bool isPrime = true;
            for (int j = 2;  j*j <= i; j++) {
            
                if (i % j == 0) {
                    isPrime = false;
                  break;
                }
           }
            if (isPrime)
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
