#include<iostream>
using namespace std;
int main(){
	int num,choice;
	int d1,d2,d3,d4;
	int rev,sum;
	cout<<"Enter a 4 digit no.: ";
	cin>>num;
	if(num<1000||num>9999){
		cout<<"Invalid input! Please enter a 4-digit no. ";
		return 0;
	}
	d1=num/1000;
	d2=(num/100)%10;
	d3=(num/10)%10;
	d4=num%10;
	rev=d4*1000+d3*100+d2*10+d1;
	cout<<"\nMENU"<<endl;
	cout<<"\n1.Reverse the no."<<endl;
	cout<<"\n2.Sum of number and its reverse"<<endl;
	cout<<"\n3.Sum of alternative digits"<<endl;
	cout<<"enter your choice: ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Reverse= "<<rev;
			break;
		case 2:
			sum=num+rev;
			cout<<"Sum= "<<sum;
			break;
		case 3:
			cout<<"1st + 3rd digit= "<<d1+d3<<endl;
			cout<<"2nd + 4th digit= "<<d2+d4;
		    break;
		default:
			cout<<"Invalid choice!";
	}
	return 0;
	
}
