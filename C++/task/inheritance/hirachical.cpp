#include<iostream>
using namespace std;
class details{
	public:
		void student(){
			int id;
			string name;
			int standerd;
			
			cout<<"Enter student id="<<endl;
			cin>>id;
			cout<<"Enter student name="<<endl;
			cin>>name;
			cout<<"Enter student standerd="<<endl;
			cin>>standerd;
		}
		void getdata(){
			int id;
			string name;
			int standerd;
			cout<<"student id"<<id<<endl;
			cout<<"student name"<<name<<endl;
			cout<<"student standerd"<<standerd<<endl;
			
		}
};
class commerce : public details{

		public:
		void c1(){
			string stream;
			
			cout<<"enter student stream="<<endl;
			cin>>stream;
		}
};
class science : public details{

		public:
		void s1(){
			string stream;
			
			cout<<"enter student stream="<<endl;
			cin>>stream;
		}
};
int main(){
	commerce obj;
	obj.student();
	obj.getdata();
	obj.c1();
	science obj2;
	obj2.s1();
	
	
	
}
