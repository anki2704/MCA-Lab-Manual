// by using switch case

#include <iostream>
using namespace std;
int main(){
	char ch;
	cout << " Enter the character : "<< endl;
	cin >> ch ;
	int ascii = ch;
//	cout <<ascii<<endl;
	int type;
	
	
	 if (ascii>=65 && ascii<=90) {
	 	type = 1 ;         // capital 
	 }
	 else if (ascii>=97 && ascii<=122){
	 	type =2;               // small
	 }
	 else if (ascii>=48 && ascii<=57){
	 	type =3;                // digit
	 }
	 else  {
	 	type =4;                // special symbol
	 }
     
      switch (type){
      	case 1:
      		cout<< " Capital letter (A-Z)";
      		break;
     		
      	case 2:
      		cout<< " Small letter (a-z)";
      		break;
      	case 3:
    		cout<< " Digit (0-9)";
      		break;
      	case 4:
      		cout<< " Special symbol";
      		break;
	  }
	  return 0;
}

