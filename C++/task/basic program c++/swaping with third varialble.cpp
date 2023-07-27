#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the value a and b="<<endl;
	cin>>a>>b;
	c=a+b;
	b=c-b;
	a=c-b;
	cout<<"after swaping value of a="<<a<<endl;
	cout<<"after swaping value of b="<<b<<endl;
	return 0;
}

