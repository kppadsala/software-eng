#include<iostream>
using namespace std;
class student{
	public:
		int rollno;
		void detail(){
			cout<<"Enterr the roll no="<<endl;
			cin>>rollno;
		}
};
class test:public student{
	public:
		int maths,computer;
		void studenttest()
		{
			cout<<"enter marks of maths="<<endl;
			cin>>maths;
			cout<<"enter marks of computer="<<endl;
			cin>>computer;
		}
};
class result:public test{
	public:
		int total;
		void student_result(){
			total=maths+computer;
			cout<<"total of marks="<<total<<endl;
		}
};
int main(){
	result obj;
	obj.detail();
	obj.studenttest();
	obj.student_result();
}
