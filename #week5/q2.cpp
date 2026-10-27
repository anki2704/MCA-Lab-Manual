#include <iostream>
using namespace std ;
int main (){
	int n;
	int sum =0;
	cout<< " Enter the size of array: "<< endl;
	cin>> n;
	int arr[n];
	cout << " Enter elements of array :"<< endl;
	for (int i=0 ; i<n; i++){
		cin>> arr [i];
	}
	
	for (int i =0 ; i<n;i++){
		sum+=arr[i];
	}
	cout<< " The sum is : "<< sum<< endl;
	
	
	
}
