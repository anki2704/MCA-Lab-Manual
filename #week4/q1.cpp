#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; 
    cout<< " Enter the number:"<< endl;
    cin >> n;
    
    string res = (n % 2 == 0)? "even" : "odd";
    cout<<" Result :"<< res <<endl;
}
