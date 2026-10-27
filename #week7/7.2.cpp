#include<iostream>
using namespace std;
int main()
{
	char s[100];
	cout<<"Enter a string: ";
	cin.getline(s,100);
	
	char*p=s;
	int length=0;
	
	while(*p)
	{
		length++;
		p++;
	}
	cout<<"Length of "<<s<<" is: "<<length<<endl;
	return 0;
}
