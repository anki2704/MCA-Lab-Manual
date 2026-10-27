#include<iostream>
using namespace std;

class pntr_obj{
	int roll_no;
	string name;
public:
	void set_data(int r,string n){
	roll_no=r;
	name=n;
}
	void print(){
		cout<<"Roll No: "<< this->roll_no<<endl;
		cout<<"Name: "<< this->name<<endl;
		cout<<endl;
	}
};
int main(){
	pntr_obj obj1,obj2,obj3;
	obj1.set_data(1,"Rashi");
	obj2.set_data(2,"Palak");
	obj3.set_data(3,"Shivangi");
	
	obj1.print();
	obj2.print();
	obj3.print();
	
	return 0;
}
