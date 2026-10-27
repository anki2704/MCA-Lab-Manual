#include<iostream>
using namespace std;

class Numbers{
	int a,b;
	
	public:
		void input(){
			cout<<"Enter two numbers: ";
			cin>>a>>b;
		}
		int mx(){
			return(this->a>this->b)?this->a:this->b;
		}
};
int main()
{
	Numbers n;
	n.input();
	cout<<"Greatest: "<<n.mx();
	return 0;
}
