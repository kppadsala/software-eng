#include<iostream>
using namespace std;
class student{
	private:
		int x,y;
	public:
		student()
		{
			cout<<"Enter two num"<<endl;
			cin>>x>>y;
			cout<<"value of X="<<x<<endl<<"value of Y="<<y<<endl;
		}
		student(int a,int b){
			x=a;
			y=b;
			cout<<"value of a="<<a<<endl<<"value of b="<<b<<endl;
		}
};
int main(){
	student obj;
	student obj1(45,55);
	
	return 0;
}
