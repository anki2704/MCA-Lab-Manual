#include <iostream>
using namespace std;
int main(){
   int a=0;
   int b=1;
   int n ;
   int i=1;
   cout << " Enter the number of terms : "<< endl;
   cin >> n;
   if (n<0){
		cout<<"Invalid number. "<< endl;
		return 0;
	
	}
	cout << "Fibonacci Series : "<< endl;
	
	
   while (i<=n){
   	cout << a<< " ";
   	int c = a+b;
   	a= b;
   	b=c;
   	i++;
   }
  
}
