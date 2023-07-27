#include<iostream>
using namespace std;
class add{
	public:
		int a,b,addition;
	void getdata(){
		cout<<"Enter the value a"<<endl;
		cin>>a;
		cout<<"Enter the value b"<<endl;
		cin>>b;
		addition=a+b;
		
		
	}
	void setdata(){
		cout<<"addtion of two num="<<addition<<endl;
	}
};
int main(){
	add a1;
	a1.getdata();
	a1.setdata();
	return 0;
}
