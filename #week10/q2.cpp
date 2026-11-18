#include <iostream>
#include <string>
using namespace std;

struct Employee{
	string name;
	float basicpay;
	float DA;
	float grossSalary ;
	
};


int main (){
	int size;

    cout << "Enter the number of employees: ";
    cin >> size;
    cin.ignore();
	Employee emp[size];
	
	for (int i=0; i<size;i++){
		cout << "Enter the details of Employee: "<<i+1 <<endl;
		
		cout << "Enter Name:";
		getline(cin , emp[i].name);
		
		cout << "Enter Basic Pay:";
		cin>> emp[i].basicpay;
		cin.ignore();
		
		emp[i].DA = 0.52 * emp[i].basicpay;
		emp[i].grossSalary = emp[i].basicpay + emp[i].DA;		
	}
	
	cout << endl;
	cout <<"Employee Name : \t \t Gross Salary: " << endl;
	
	for (int i=0; i<size;i++){
		cout << emp[i].name << "\t  \t  " << emp[i].grossSalary<< endl;
	}
	return 0;
}
