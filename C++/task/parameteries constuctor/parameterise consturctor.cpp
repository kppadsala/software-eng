#include<iostream>
using namespace std;
class student{
	public:
		int x,y;
	demo(x,y){
	}
	void display(){
		cout<<"enter value x="<<x<<endl
		cout<<"enter value y"<<y<<endl
	}		
};
int main(){
	student obj(10,20);
	obj.display();
	return 0;
}
