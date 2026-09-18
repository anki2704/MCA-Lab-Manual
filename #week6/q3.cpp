#include <iostream>
using namespace std;

int main() {
  int num;
  cout<< "Enter the number:"<<  endl;
  cin >> num;
  int *add = &num;
  cout<< " Number :"<< num<<endl;
  cout << " Address of num :"<< add << endl;

}
