#include<iostream>
using namespace std;

class A{
public:
	int x;
	A* ptr;
	A() {
		x=10;
	}
	A*& getvalue(){
		return this->ptr;
	}
};
int main()
{
	A obj;
	A*& p=obj.getvalue();
	cout<<p->x;
	
	return 0;
}
