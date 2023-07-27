#include<iostream>
using namespace std;
int main(){
	int a,p,t;
	float r,b;
	
	cout<<"Enter of intrest rate in % =";
	cin>>r;
	r=r/100;
	cout<<"intrest rate is ="<<r<<endl;
	
	cout<<"Enter the time in year=";
	cin>>t;
	
	b=1+r*t;
	cout<<"this some process="<<b<<endl;
	
	cout<<"Enter the amount";
	cin>>a;
	
	p=a*b;
	cout<<"final amount is="<<p;
	
	return 0;
}
