#include <iostream>
using namespace std ;
int main (){
	int n;
	cout<< " Enter the size of array: "<< endl;
	cin>> n;
	int arr[n];
	cout << " Enter elements of array :"<< endl;
	for (int i=0 ; i<=n; i++){
		cin>> arr [i];
	}
	cout<< " The array is : "<<  endl;
	for (int i =0 ; i<=n;i++){
		cout << arr[i]<<";";
	}
	
	
	
}
