#include <iostream>
using namespace std;

float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    return a / b;
}
int main(){
	float n1, n2;
	    int choice;
	    cout << "ARITHMETIC MENU " << endl;
	    cout << "1. Addition" << endl;
	    cout << "2. Subtraction" << endl;
	    cout << "3. Multiplication" << endl;
	    cout << "4. Division" << endl;
	    cout << "\nEnter your choice: ";
	    cin >> choice;
	    cout << "\nEnter two numbers: ";
	    cin >> n1 >> n2;
	    switch(choice){
			case 1:
				cout<<"Addition= "<<add(n1,n2);
				break;
			case 2:
				cout<<"Subtraction= "<<subtract(n1,n2);
				break;
			case 3:
				cout<<"Multiplication= "<<multiply(n1,n2);
				break;
			case 4:
				if(n2) cout<<"Division= "<<divide(n1,2);
				else cout<<"Division by zero is not possible.";
				break;
			default:
				cout<<"Invalid Choice!!";		
		}
		return 0;
}


