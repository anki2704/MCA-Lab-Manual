#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n ;
	cout << "Enter the size of array : "<<  endl;
	cin >> n ;
	int arr[n];
	int *p = arr;
	cout<<"Enter array elememts: ";
	for (int i=0 ; i<n ; i++){
		cin>> *(p+i);		
	}
	cout << "Element of array are :"<< endl ;
	for (int i=0 ; i<n ; i++){
		cout << arr[i] << " ";		
	}
	cout << endl ;
	float sum =0 ;
	for (int i=0; i<n ; i++){
		sum+= *(p+i);
	}
    float mean = sum / n;
    float var = 0;
    for  (int i=0 ; i<n ; i++){
    	var+= ((*(p+i) - mean) * (*(p+i) - mean));
	}
	float std = sqrt(var/n);
	
	cout<<"Sum is: "<<sum<<endl;
	cout<<"Mean is: "<<mean<<endl;
	cout<<"Std Deviation is: "<<std<<endl;

	
	return 0;
}
