/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class person{
	public:
		string name;
		int age;
		void personinfo(){
		cout<<"enter the person name="<<endl;
		cin>>name;
		cout<<"enter the person age="<<endl;
		cin>>age;
		}
		void display(){
			cout<<"person name is  "<<name<<endl;
			cout<<"person age is  "<<age<<endl;
		}
};
class student{
	public:
	int total,sub1,sub2,sub3,sub4,sub5;
	float per;
	void studentinfo(){
	cout<<"enter marks of subject1="<<endl;
	cin>>sub1;
	cout<<"enter marks of subject2="<<endl;
	cin>>sub2;
	cout<<"enter marks of subject3="<<endl;
	cin>>sub3;
	cout<<"enter marks of subject4="<<endl;
	cin>>sub4;
	cout<<"enter marks of subject5="<<endl;
	cin>>sub5;
	total=sub1+sub2+sub3+sub4+sub5;
	per=total/5;
	}
	void getdata(){
		cout<<"subject1 marks="<<sub1<<endl;
		cout<<"subject2 marks="<<sub2<<endl;
		cout<<"subject3 marks="<<sub3<<endl;
		cout<<"subject4 marks="<<sub4<<endl;
		cout<<"subject5 marks="<<sub5<<endl;
		cout<<"total of marks="<<total<<endl;
		cout<<"percentage="<<per<<endl;
		
	}
};
class teacher:public person, public student
{
	public:
	int salary;
	void data(){
		cout<<"enter the theache salary="<<endl;
		cin>>salary;
	}
	void getsalary(){
		cout<<"the teacher salary is"<<salary<<endl;
	}
};
int main(){
	teacher obj;
	obj.personinfo();
	obj.display();
	obj.studentinfo();
	obj.getdata();
	obj.data();
	obj.getsalary();
}
