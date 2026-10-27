#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s[100];
	int count=0;
	cout<<"Enter a string: ";
	cin.getline(s,100);
	char*p=s;
	while(*p){
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
		*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'
		)
		count++;
		
	    p++;	
	}
	cout<<"No. of vowels  in "<<s<<" are: "<<count<<endl;
	return 0;
}
