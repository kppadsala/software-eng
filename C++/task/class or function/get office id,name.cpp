#include<iostream>
using namespace std;
class office{
	public:
		int officeid;
		string empname;
	void getdata(){
		cout<<"Enter the office ID="<<endl;
		cin>>officeid;
		cout<<"enter the emp name="<<endl;
		cin>>empname;
	}
	void setdata(){
		cout<<"OFFICE ID IS="<<officeid<<endl<<"EMP NAME IS="<<empname<<endl;
	}
};
int main(){
	office o1;
	o1.getdata();
	o1.setdata();
	return 0;
}
