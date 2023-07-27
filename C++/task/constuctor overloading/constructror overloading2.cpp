#include<iostream>
using namespace std;
class demo{
	
	public:
		float ar;
	demo(){
		ar=0;
	}
	void display(){
		
		cout<<"area ="<<ar<<endl;
	}
};
int main(){
	demo obj1;
	demo obj2(10,20);
	obj1.display();
	obj2.display();
	return 0;
}
