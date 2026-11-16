// print the factorial of given number   (non- recursive)
#include <iostream>
using namespace std ;
int  fact(int n){
	int f=1; 
	if ( n==1 || n==0 ){
		return 1;
	}
	
	else {
	for (int i=1; i<=n ; i++){
		f*=i; 
	}
}
	return f;
}
int main (){
	int n ;
	cout << "Enter the number: "<< endl;
	cin >> n;
	cout << "Factorial of number is : " << fact(n)<< endl;
	
}


 
