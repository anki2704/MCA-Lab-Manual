#include <iostream>
using namespace std;
int main (){
	int n;
	cout<< "Enter the length of array : "<< endl;
	cin >> n;
	int arr[n];
	cout << " Enter elements :"<< endl;
	for (int i=0 ; i<n;i++){
		cin >> arr[i];
	}
	cout << " The array is :"<< endl;
	for (int i=0 ; i<n; i++){
		cout << arr[i]<< ";";
	}
	cout << endl;
	int max=arr[0];
	int s_max=arr[0];
	for (int j =0 ; j<n;j++){
		 if (arr[j] > max)
		 max= arr[j];
		 
	}
	for (int j=0; j<n ;j++){
		if (arr[j]!=max && arr[j] > s_max)
		s_max = arr[j];
	}
	cout << " largest :"<<max<< endl  ;
	cout <<" second : "<< s_max << endl;
}
