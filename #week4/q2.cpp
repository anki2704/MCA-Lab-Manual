#include <iostream>
using namespace std;
int main(){
    int n1, n2; 
    cout<< " Enter the first numbers:"<< endl;
    cin>>n1;
    cout<< " Enter the second numbers:"<< endl;
    cin>> n2;
    while (n2 != 0){
    	int cb = n1 & n2;
    	n1=n1^n2;
		n2=cb<<1;
	}


	cout<< "Sum:"<< n1<<endl;
    	return 0;
}
