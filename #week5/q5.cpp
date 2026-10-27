#include <iostream>
using namespace std ;
int main (){
	int n;
	cout<< "Enter the length of array : "<< endl;
	cin >> n;
	int arr[n];
	
	cout << "Enter elements :"<< endl;
	for (int i=0 ; i<n;i++){
		cin >> arr[i];
	}

	int j =n-1;
	cout << "The reverse  array is :"<< endl;
	for( int i=0; i<j ;i++){
		int temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
		
	}
	for (int i=0 ; i<n;i++){
		cout<< arr[i]<<";";
	}
	
	cout << endl;
}
