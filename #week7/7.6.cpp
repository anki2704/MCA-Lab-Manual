#include <iostream>
#include <string>
using namespace std;
class flight{
	int flight_no;
	string source;
	string destination;
	float fare;
	
	public: 
	get_data()
	{
		cout <<"Enter flight no : ";
		cin >> flight_no;
		cout <<"Enter source : ";
		cin >> source;
		cout <<"Enter destination : ";
		cin >> destination;
		cout <<"Enter fare : ";
		cin >> fare;
		this->flight_no = flight_no;
		this->source = source;
		this->destination = destination;
		this->fare = fare;
	}
	show_data()
	{
		cout << "------details------" << endl;
		cout << "flight no : " << this->flight_no << endl;
		cout << "source : " << this->source << endl;
		cout << "destination : " << this->destination << endl;
		cout << "fare : " << this->fare << endl;
	}
};
int main() {
	flight f;
	
	f.get_data();
	f.show_data();
	
	return 0;
}
