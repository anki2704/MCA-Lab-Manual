// Question 8

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n , og,dg ;
	int sum=0;
	cout <<"Enter the number :"<< endl;
	cin >> n;
	og =n;
	while (n>0){
		dg = n% 10;
		sum += dg*dg*dg;
		n/=10;
	}
	
	if (sum == og){
		cout <<og<< " Given is Armstrong Number ."<< endl;
	}
	else{
		cout <<og <<  " Given is not Armstrong Number ."<< endl;
	}
	
	
}

