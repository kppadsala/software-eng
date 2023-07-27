#include<iostream>
using namespace  std;
class demo{
	private:
		int  id;
		string sname;
		string name;
		int standerd;
	public:
		demo(int  i,string sn,string n,int s){
			id=i;
			sname=sn;
			name=n;
			standerd=s;
			}
		void getdata(){
			cout<<"student id ="<<id<<endl;
			cout<<"student sname ="<<sname<<endl;
			cout<<"student name ="<<name<<endl;
			cout<<"student standerd ="<<standerd<<endl;
		}
};
int main(){
	demo obj(7,"padsala","krunal",11);
	obj.getdata();
}
