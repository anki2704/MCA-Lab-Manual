#include<iostream>
#include<string>
using namespace std;

int main(){
	int num,choice,temp,rem;
	string result=" ";
	char digits[]="0123456789ABCDEF";
	cout<<"Enter a decimal no. ";
	cin>>num;
	cout<<"\n===MENU==="<<endl;
	cout<<"\n1.Binary"<<endl;
	cout<<"\n2.Octal"<<endl;
	cout<<"\n3.Hexadecimal"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	int base;
	switch (choice)
	    {
	        case 1:
	            base = 2;
	            break;
	
	        case 2:
	            base = 8;
	            break;
	
	        case 3:
	            base = 16;
	            break;
	
	        default:
	            cout << "Invalid choice!";
	            return 0;
	    }
	temp=num;
	if(temp==0) result="0";
	else{
		while(temp){
			rem=temp%base;
			result=digits[rem]+result;
			temp/=base;
			
		}
	}
	cout<<"Converted no.= "<<result;
	return 0;
}
