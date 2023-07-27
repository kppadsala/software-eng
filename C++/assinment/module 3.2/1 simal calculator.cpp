#include<iostream>
using namespace std;
class add{
	public:
		int a,b,addition,substraction,multiplication,division;
	void getdata(){
		cout<<"Enter the value a"<<endl;
		cin>>a;
		cout<<"Enter the value b"<<endl;
		cin>>b;
		addition=a+b;
		substraction=a-b;
		multiplication=a*b;
		division=(float)a/b;
		
	}
	void setdata(){
		cout<<"addtion of two num="<<addition<<endl;
		cout<<"addtion of two num="<<substraction<<endl;
		cout<<"addtion of two num="<<multiplication<<endl;
		cout<<"addtion of two num="<<division<<endl;
	}
};
int main(){
	add a1;
	a1.getdata();
	a1.setdata();
	return 0;
}
