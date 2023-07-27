#include<iostream>
using namespace std;
class student{
	public:
		int id,maths,computer,sci;
		string name;
	void getdata();
	void setdata();
};
void student::getdata(){
	cout<<"enter the student ID="<<endl;
	cin>>id;
	cout<<"enter the student name="<<endl;
	cin>>name;
	cout<<"enter the marks of maths="<<endl;
	cin>>maths;
	cout<<"enter the marks of computer="<<endl;
	cin>>computer;
	cout<<"enter the marks of sci="<<endl;
	cin>>sci;
}
void student::setdata()
{
	cout<<"student id="<<id<<endl<<"student name="<<name<<endl<<"marks of maths"<<maths<<endl<<"marks of computer"<<computer<<endl<<"marks of sci"<<sci;
}
int main(){
	student d1;
	d1.getdata();
	d1.setdata();
	return 0;
}
