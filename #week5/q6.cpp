#include <iostream>
using namespace std ;
int main(){
	int arr1[3][3]= {{1,2,3},{4,5,6},{7,9,8}};
	int m ,n;
	cout << " Enter the no. of element in row:"<< endl;
	cin>> m;
	cout << "Enter the no. of elemnets in columns:"<< endl;
	cin>> n;
	
	int arr2[m][n];
	cout << " Enter element of array:"<< endl;
	for (int i =0 ; i<m; i++){
		for (int j=0; j<n; j++ ){
			cin >> arr2[i][j];
		}
		
	}
	cout << "Element of Array 1:"<< endl;
	for (int i =0 ; i<3; i++){
		for (int j=0; j<3; j++ ){
			cout<< arr1[i][j]<< " ";
		}
		cout << endl;
	}
	cout << "Element of array 2:"<< endl;
	for (int i =0 ; i<m; i++){
		for (int j=0; j<n; j++ ){
			cout<< arr2[i][j]<< " ";
		}
		cout << endl;
	}
	cout << endl;
	
	cout <<" Addition of matrix: "<< endl;
	 int res[3][3];
     // addition 
     for ( int i=0;i<=2;i++){
        for( int j=0;j<=2;j++){
           res[i][j]= arr1[i][j] + arr2[i][j];
        }     
    }
       for ( int i=0;i<=2;i++){
        for( int j=0;j<=2;j++){
           cout << res[i][j]<< " ";
        }     
    cout << endl;}
    
    cout<< " Multiplication of matrix:"<< endl;
    int mul[3][m];
    // multiplication
    if (3 == m){
    	for (int i =0 ; i<3 ; i++){
    		for (int j=0;j<n ;j++){
    			mul[i][j]=0;
    			for (int  k=0; k<m; k++ ){
    				mul[i][j]+= arr1[i][k] * arr2[k][j];
				}
			}
		}
		
		 cout <<endl;
        for ( int i=0; i<3; i++){
            for ( int j=0; j<n; j++){
                cout << mul[i][j]<<" ";
            }
            cout << endl;
        } 
	}
	else 
	cout<< " multiplication not done;"<< cout;
}
