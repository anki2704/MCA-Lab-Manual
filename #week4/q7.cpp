// Question 7
// quadratic equation == >  ax2+bx+c=0
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a, b, c , D , r1 , r2;
	cout<<" Enter the value of a , b, c: " << endl;
	cin >> a>> b>>c ;
	 
	D = (b*b) - 4*a*c;
	
	 if ( D>0){                  // real roots
	 	r1 = (-b + sqrt(D))/(2*a);
	 	r2 = (-b - sqrt(D))/(2*a);
	 	cout << " Real Roots are :" << r1 << " and "<< r2 << endl;
	 }
	 else if(D==0){
	 	r1 = -b / (2*a);
	 	cout << " Both are equal roots and "<< r1 << " is the roor "<< endl;
	 }
	 else {
	 	cout << " Roots are imaginary "<< endl;
	 }
	 return 0;
	
	
}

