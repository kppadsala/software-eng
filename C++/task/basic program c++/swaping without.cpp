#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter the value a and b="<<endl;
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swaping value of a="<<a<<endl;
	cout<<"after swaping value of b="<<b<<endl;
	return 0;
}

