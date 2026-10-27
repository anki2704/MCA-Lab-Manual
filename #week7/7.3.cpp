#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double a[100],sum=0,mean,sd=0;
	/*cout<<"Enter no. of elements in the array: ";
	cin>>n;*/
	cout<<"Enter array elememts: ";
	cin>>n;
	double*p=a;
	for(int i=0;i<n;i++){
		cin>>*(p+i);
		sum+=*(p+i);
	}
	
	mean=sum/n;
	
	for(int i=0;i<n;i++)
	sd+=(*(p+i)-mean)*(*(p+i)-mean);
	sd= sqrt(sd/n);
	
	cout<<"Sum is: "<<sum<<endl;
	cout<<"Mean is: "<<mean<<endl;
	cout<<"Std Deviation is: "<<sd<<endl;
	
	return 0;
}
